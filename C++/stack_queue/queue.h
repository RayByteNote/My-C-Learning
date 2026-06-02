#pragma once
#include<iostream>
#include<deque>

namespace ray
{
	template<class T,class container = deque<T>>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}
		void pop()
		{
			_con.pop_front();
		}
		size_t size() const
		{
			return _con.size();
		}
		bool empty() const
		{
			return _con.empty();
		}
		T& front()
		{
			return *(_con.begin());
		}
		const T& front() const 
		{
			return *(_con.begin());
		}
		T& back()
		{
			return *(_con.end() - 1);
		}
		const T& back() const
		{
			return *(_con.end() - 1);
		}
	private:
		container _con;
	};
}