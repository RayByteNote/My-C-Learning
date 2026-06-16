#pragma once
#include<iostream>

namespace ray
{
	template<class T>
	class heap
	{
	public:
		void swap(heap& x)
		{
			std::swap(_arr, x._arr);
			std::swap(_size, x._size);
			std::swap(_capacity, x._capacity);
		}
		heap(const heap& x)
			:_arr(nullptr)
			, _size(0)
			, _capacity(0)
		{
			if (x._size > 0)
			{
				T* tmp = new T[x._capacity];
				for (size_t i = 0; i < x._size; i++)
				{
					tmp[i] = x._arr[i];
				}
				_arr = tmp;
				_size = x._size;
				_capacity = x._capacity;
			}
			
		}
		heap& operator=(heap x)
		{
			swap(x);
			return *this;
		}
		heap()
			:_arr(nullptr)
			,_size(0)
			,_capacity(0)
		{ }
		~heap()
		{
			if(_arr)
			delete[] _arr;
			_arr = nullptr;
			_size = _capacity = 0;
		}
		void push(const T& x)
		{
			if (_size == _capacity)
			{
				int newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
				T* tmp = new T[newcapacity];
				for (size_t i = 0; i < _size; ++i)
				{
					tmp[i] = std::move(_arr[i]); 
				}
				delete[] _arr;
				_arr = tmp;
				_capacity = newcapacity;
			}
			_arr[_size] = x;
			++_size;
			adjust_up(_size-1);
		}
		void pop()
		{
			if (_size == 0)return;
			std::swap(_arr[0], _arr[_size - 1]);
			--_size;
			adjust_down(0);
		}
		size_t size() const
		{
			return _size;
		}
		const T& top() const
		{
			return _arr[0];
		}
		bool empty() const
		{
			return _size == 0;
		}
	protected:
		void adjust_down(int parent)
		{
			int child = parent * 2 + 1;
			while (child<_size)
			{
				if (child+1 < _size && _arr[child] < _arr[child + 1])
					child += 1;
				if(_arr[parent]<_arr[child])
				{ 
					std::swap(_arr[child], _arr[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}
		}
		void adjust_up(int child)
		{
			int parent = (child - 1) / 2;
			while (child > 0)
			{
				if (_arr[parent] < _arr[child])
				{
					std::swap(_arr[parent], _arr[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}
	private:
		T* _arr;
		size_t _size;
		size_t _capacity;
	};
}