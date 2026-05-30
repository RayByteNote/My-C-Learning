#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"list.h"
using namespace std;

namespace ray
{
	template<class T>
	void Print(const list<T>& lt)
	{
		typename list<T>::const_iterator it = lt.begin();
		while(it!=lt.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void test1()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);
		lt1.push_back(3);
		lt1.push_back(4);
		list<int>::iterator it1 = lt1.begin();
		while (it1 != lt1.end())
		{
			cout << *it1 << " ";
			++it1;
		}
		cout << endl;
	}
	void test2()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);
		lt1.push_back(3);
		lt1.push_back(4);
		const list<int> lt2(lt1);
		list<int> lt3 = lt1;
		Print(lt3);
		list<int> lt4({ 1,2,3,4,5,6,7 });
		Print(lt4);
	}
}

int main()
{
	ray::test2();
	return 0;
}