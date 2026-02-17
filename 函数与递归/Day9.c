#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	double a = sqrt(16);
//	printf("%.1lf\n", a);
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	 z = x + y;
//	return z;
//}
//简化
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//int odd(int n)
//{
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;//用Bool也行
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (odd(a) == 1)
//		printf("%d是奇数\n", a);
//	else
//		printf("%d是偶数\n", a);
//	return 0;
//}


//void abc(int a)
//{
//	if (a < 0)
//		return 0;
//	else if (a > 20)
//		printf("666");
//	else
//		printf("999");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	abc(a);
//	return 0;
//}




//void set_arr(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		arr[a] = -1;
//	}
//}
//void printf_arr(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf_arr(arr, sz);
//	//将数组中所以数据替换为-1
//	set_arr(arr, sz);
//	//打印出数组的内容
//	printf_arr(arr, sz);
//	return 0;
//}

//函数传参时，实参应该写数组名
//void printf_arr(int arr[][5], int a, int b)二维数组行可以省略，列不行
//void printf_arr(int arr[3][5], int a, int b)//数组传参，形参不会生成新数组
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3},{2,3,4,5},{6,7,8,9} };
//	//用函数打印这个二维数组
//	printf_arr(arr, 3, 5);//实参的数组和形参的数组是一个数组，不同于变量
//	return 0;
//}



//#include <stdbool.h>
//_Bool year(int y)
//{
//	if ((y % 4 == 0) && y % 100 != 0 || y % 400 == 0)
//		return true;
//	else
//	{
//		return false;
//	}
//}
//int mouth(int y,int m)
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int d = arr[m];
//	if (year(y) && m == 2)//嵌套调用
//	{
//		m += 1;
//	}
//	return d;
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &y, &m);
//	int d=mouth(y, m);
//	printf("%d\n", d);
//	return 0;
//}

//int abc()
//{
//	int a = 0;
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if (abc(y));//链式
//	printf("闰年\n");
//	else
//		printf("非闰年\n");
//	return 0;
//}



//int abc(int);//函数的声明，形式参数的名字可以省略

//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if (abc(y))
//		printf("闰年\n");
//	else
//		printf("非闰年\n");
//	return 0;
//}
//int abc(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//extern声明外部符号



test()
{
	static int b = 1;//修饰局部变量。static修饰后无外部链接属性，只能在其当前文件使用，函数同理
	b++;
	printf("%d\n", b);
}
int main()
{
	int a = 0;
	for (a = 0; a < 5; a++)
	{
		test();
	}
	return 0;
}