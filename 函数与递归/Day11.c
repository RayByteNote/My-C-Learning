#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int Fac(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n > 0)
//		return Fac(n - 1) * n;//º¯ÊýµÝ¹é
//	else
//	{
//		printf("ÊäÈë´íÎó£¬ÇëÖØÊÔ\n");
//		printf("ÇëÊäÈë:>");
//		scanf("%d", &n);
//		Fac(n);
//		return Fac(n - 1) * n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//void Print(int n)
//{
//	if (n > 9)
//		Print(n/10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	printf("%d\n", count);
//}



//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//		scanf("%d", &n);
//		int r = Fib(n);
//		printf("%d\n", r);
//}


//ÇàÍÜÌøÌ¨½×(ì³²¨ÄÇÆõÊýÁÐ)
int Jump(int n)
{
	if (n == 1)
	return 1;
	if (n == 2)
	return 2;
	if (n == 3)
		return 3;
	if (n > 2)
	return Jump(n - 2) + Jump(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = Jump(n);
	printf("%d", r);
}