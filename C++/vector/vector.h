#pragma once
#include<iostream>
#include<assert.h>
#include<vector>
#include<type_traits>
using namespace std;

namespace ray 
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		/*vector()
		{}*/

		vector() = default;

		vector(initializer_list<T> il)
		{
			reserve(il.size());
			for (auto& e : il)
			{
				push_back(e);
			}
		}

		vector(const vector<T>& v)
		{
			reserve(v.capacity());
			for (auto& e : v)
			{
				push_back(e);
			}
		}

		void swap(vector<T> tmp)
		{
			std::swap(_start, tmp._start);
			std::swap(_finish, tmp._finish);
			std::swap(_endofstorage, tmp._endofstorage);
		}
		vector<T>& operator=(vector<T> v)
		{
			swap(v);
			return *this;
		}

		template<class Inputiterator, class = typename std::enable_if<!std::is_integral<Inputiterator>::value>::type>
		vector(Inputiterator first, Inputiterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		vector(size_t n, T val = T())
		{
			resize(n, val);
		}
		vector(int n, T val = T())
		{
			resize(n, val);
		}

		~vector()
		{
			if (_start)
			{
				delete[] _start;
				_start = _finish = _endofstorage = nullptr;
			}
		}
		
		void resize(size_t n,T val=T())
		{
			if (n > size())
			{
				reserve(n);
				while (_finish != _start + n)
				{
					*_finish = val;
					++_finish;
				}
			}
			else 
			{
				_finish = _start + n;
			}
		}

		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const 
		{
			return _endofstorage - _start;
		}

		T& operator[](size_t n)
		{
			assert(n < size());
			return _start[n];
		}

		const T& operator[](size_t n) const
		{
			assert(n < size());
			return _start[n];
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old_size = size();
				T* tmp = new T[n];
				if(_start)
				{
					//memcpy(tmp, _start, capacity());
					for (size_t i = 0; i < old_size; i++)
					{
						tmp[i] = _start[i];
					}
					delete[] _start;
				}
				_start = tmp;
				_finish = _start + old_size;
				_endofstorage = _start + n;
			}
		}

		void push_back(const T& val)
		{
			if (_finish == _endofstorage)
			{
				reserve(capacity() == 0 ? 4 : 2 * capacity());
			}
			*_finish = val;
			++_finish;
		}

		void clear()
		{
			_finish = _start;
		}

		bool empty() const
		{
			return _start == _finish;
		}

		void pop_back()
		{
			assert(!empty());
			--_finish;
		}

		iterator insert(iterator pos, const T& x)
		{
			assert(pos >= _start&&pos<=_finish);
			if (_finish == _endofstorage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : 2 * capacity());
				pos = _start + len;
			}
			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = x;
			++_finish;
			return pos;
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);
			iterator it = pos + 1;
			while (it!=_finish)
			{
				*(it - 1) = *it;
				++it;
			}
			--_finish;
			return pos;
		}
	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _endofstorage = nullptr;
	};
}