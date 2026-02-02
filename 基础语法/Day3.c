#include <stdio.h>//算术操作符+-*/%，也叫双目操作符
// int main()
// {
//     int a =100;
//     int b = 200;
//     int sum = a +b;
//     printf("%d",sum);
//     return 0;
// }

// int main()
// {
//     int a =100;
//     int b =200;
//     int sum = a+100;//变量和常量可以换
//     printf("%d",sum);
// }//减法，乘法(*)与上面同理

// int main()
// {
// int a =6/4;//int类型只保留整数
// float b = 6.0/4;//6.0是float类型，4也会自动变成float类型,只要有一个数是小数就行
// printf("%d\n",a);
// printf("%lf",b);//%lf默认保留六位小数
//     return 0;
// }

// int main()
// {
// int a =6%4;//求模运算返回两个整数的余数，只能用于整数，不能用于浮点数
// printf("%d\n",a);
//     return 0;
// }

// int main()
// {
//     printf("%d\n",13%3);//结果的正负取决于第一个数的正负
//     printf("%d\n",-13%3);
//     printf("%d\n",-13%-3);
//     return 0;
// }

// int main()
// {
//     int a=0;//初始化
//     b=10;//赋值，=是赋值操作符
//     return 0;
// }

// int main()
// {
//     int a=4;
//     int b=6;
//     int c=10;
//     c=b=a+15;//连续赋值，从右向左依次赋值
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }

// int main()
// {
//     int a=10;
//     //a=a+4;
//     a+=4;//-=,*=,/=，%=同理
//     printf("%d\n",a);
//     return 0;
// }

//为什么变量要初始化
//局部变量不初始化，它的值是随机值
//全局变量不初始化，它的值会默认初始化为0

// int a;
// int main()
// {
//     // int a;
//     printf("%d\n",a);
//     return 0;
// }


//单目操作符，++，--,+(正),-(负)
// int main()
// {
//     int a=10;
//     a=a-1;
//     a-=1;
//     --a;
//     a--;//输出都是9
//     return 0;
// }

// int main()
// {
//     int a=10;
//     int b=a--;//后置--,先使用，再减一
//     //b=a,a=a-1
//     printf("%d\n",a);//9
//     printf("%d\n",b);//10
//     return 0;
// }

// int main()
// {
//     int a=10;
//     int b=--a;//前置--，先减一，再使用
//     printf("%d\n",a);//9
//     printf("%d\n",b);//9
//     return 0;
// }

// int main()
// {
//     int a=10;
//     int b=a++;
//     //b=a,a=a+1
//     int c=++a;
//     //c=a+1,a=a+1
//     printf("%d\n",b);
//     printf("%d\n",c);
//     printf("%d\n",a);
//     return 0;
// }

// int main()
// {
//     int a =10;
//     int b=-10;
//     printf("%d\n",+a);
//     printf("%d\n",+b);
//     printf("%d\n",-a);
//     printf("%d\n",-b);
//     return 0;
// }

// int main()
// {
//     int a =(int)3.14;//强制类型转换
// printf("%d\n",a);
//     return 0;
// }