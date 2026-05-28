#define _CRT_SECURE_NO_WARNINGS 1
#include"vector.h"

template<class type>
void Print(type& n)
{
	for (size_t i = 0; i < n.size(); i++)
	{
		cout << n[i] << " ";
	}
	cout << endl;
}

void test1()
{
	ray::vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	Print(v1);
	//v1.pop_back();
	//v1.pop_back();
	//v1.pop_back();
	////v1.pop_back();
	//Print(v1);
	//v1.pop_back();
	//v1.pop_back();
	//Print(v1);
	//v1.pop_back();
	v1.clear();
	Print(v1);
	v1.insert(v1.begin(), 1);
	v1.insert(v1.begin(), 2);
	v1.insert(v1.begin()+1, 3);
	v1.insert(v1.begin(), 4);
	Print(v1);
	v1.erase(v1.begin() + 2);
	Print(v1);
	v1.resize(10, 2);
	Print(v1);
	v1.resize(1, 2);
	Print(v1);

}

//void test2()
//{
//	ray::vector<int> v1{1,2,3,4,5,6};
//	Print(v1);
//	ray::vector<int> v2(v1);
//	Print(v2);
//	ray::vector<int> v3;
//	v3 = v2;
//	Print(v3);
//}

void test3()
{
	ray::vector<int> v1(5,5);
	ray::vector<size_t> v2(6,6);
	Print(v1);
	Print(v2);

}
int main()
{
	test3();
	return 0;
}
