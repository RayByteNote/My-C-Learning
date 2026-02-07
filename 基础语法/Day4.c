#include <stdio.h>
// int main()
// {
//     int a =getchar();
//     //printf("%c\n",a);
//     putchar(a);
//     return 0;
// }

// int main()
// {
//     int a =10;
//     printf("%d\n",a);
//     unsigned int b =10;
//     printf("%u\n",b);//要用对应的占位符
//     return 0;
// }

// int main()
// {
//     printf("%d\n",123);
//     printf("%5d\n",123);//最小宽度，右对齐，没有5位会在前面补空格，%-5d就会在后面补，左对齐
//     return 0;
// }

// int main()
// {
//     //printf在打印小数时默认打印六位
// printf("%f\n",123.45);
// printf("%12f",123.45);
//     return 0;
// }

// int main()
// {
//     printf("%+d\n",12);
//     printf("%+d\n",-12);//d前加+就可以然结果都带符号
//     return 0;
// }

// int main()
// {
//     printf("%.3f\n",123.45);
//     printf("%.4f",123.45);//保留几位小数
//     return 0;
// }

// int main()
// {
//     printf("%*.*f\n",10,2,1.234);
//     return 0;
// }

// int main()
// {
//     printf("%s\n","Hello World");
//     printf("%.5s\n","Hello World");//输出部分字符串
//     return 0;
// }

// int main()
// {
//     int i =0;
//     int j =0;
//     float x =0;
//     float y =0;
//     scanf("%d%d%f%f",&i,&j,&x,&y);
//     printf("i = %d\n",i);
//     printf("j = %d\n",j);
//     printf("x = %f\n",x);
//     printf("y = %f\n",y);
//     return 0;
// }

// int main()
// {
//     int x= 0;
//     float y =0;
//     scanf("%d",&x);//输入   -13.45e12# 0   除了%c都会忽略起首的空白字符
//     printf("%d\n",x);//输出-13
//     scanf("%f",&y);
//     printf("%f\n",y);//输出449999994880.000000，浮点数在内存中无法精确保存
//     return 0;
// }

//EOF(-1) end of file 文件结束标志

// int main()
// {
//     int a=0;
//     int b= 0;
//     float c =0.0f;
//     int r =scanf("%d %d %f",&a,&b,&c);//scanf输出的是整数，表示成功读取的变量个数
//     printf("%d %d %f\n",a,b,c);
//     printf("%d\n",r);
//     return 0;
// }

// int main()
// {
//     char ch =0;
//     scanf("%c",&ch);//除了%c都会忽略起首的空白字符
//     printf("%c----\n",ch);
//     return 0;
// }

// int main()
// {
//     char ch =0;
//     scanf(" %c",&ch);//强制跳过多个空白字符
//     printf("%c----\n",ch);
//     return 0;
// }

// int main()
// {
//     char arr[20];
//     scanf("%s",arr);//数组名就是地址
//     printf("%s",arr);
//     return 0;
// }

// int main()
// {
//     char arr1[20];
//     char arr2[20];
//     scanf("%s %s",arr1,arr2);
//     printf("%s\n",arr1);
//     printf("%s\n",arr2);
//     return 0;
// }

// int main()
// {
//     char arr[5];
//     scanf("%4s",arr);//最多取四个字符，最后一个给\0
//     printf("%s\n",arr);
//     return 0;
// }

// int main()
// {
//     char arr[20];
//     scanf("%[^\n]s",arr);//读取字符串知道遇到\n结束
//     printf("%s\n",arr);
//     return 0;
// }

// int main()
// {
//     int y =0;
//     int m=0;
//     int d=0;
//     scanf("%d%*c%d%*c%d",&y,&m,&d);//赋值忽略符
//     printf("%d %d %d\n",y,m,d);
//     return 0;
// }