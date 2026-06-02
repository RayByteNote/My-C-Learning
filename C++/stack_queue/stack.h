#pragma once
#include<iostream>
#include<deque>
namespace ray
{
	template<class T, class container = deque<T>>
	class stack 
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}
		void pop()
		{
			_con.pop_back();
		}
		T& top()
		{
			return *(_con.end()-1);
		}
		const T& top() const
		{
			return *(_con.end() - 1);
		}
		size_t size() const
		{
			return _con.size();
		}
		bool empty() const
		{
			return _con.empty();
		}
	private:
		container _con;
	};
}