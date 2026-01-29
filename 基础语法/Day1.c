#include <stdio.h>//一个文件只用输一次
//一个文件只能有一个主函数
// int main()
// {
//     printf("Hello World!");//标点符号必须是英文
//     return 0;
// }
// int main()
// {
//     char arr1[]={"abc"};//字符串后面自带\0，以结束符号存在[a b c\0]
//     char arr2[]={'a','b','c'};//[a b c]没有\0，所以会一直打印直到遇到\0
//     printf("%s\n",arr1);//%s为字符串占位符，\n为换行
//     printf("%s\n",arr2);
//     return 0;
// }
// int main()
// {
//     int a = 0;//将ab初始化
//     int b =0;
//     scanf("%d %d",&a,&b);//&是取址符，scanf是输入函数
//     int sum =a +b;
//     printf("%d\n",sum);
//     return 0;
// }
// int a =10;//全局变量，所有函数都能用，作用域覆盖整个程序
// int main()
// {
//     {int a =5;//局部变量，仅限局部,同一变量名情况，优先级高
//     printf("%d\n",a);}//输出局部变量
//     printf("%d\n",a);//输出全局变量
//     return 0;
// }
// #define  n "abc"//宏定义是预处理阶段的文本替代指令
// #define m 10//已经宏定义了，再预处理阶段会替换所有m为10，导致下面const 10 =10
// int main()
// {
//     // const int m=10;//const的含义是只读，被它修饰的变量在初始化后不能再修改值
//     // m = 20;//上面已经定义const常量m，值为10，不能再次修改
//     // printf("%d\n",m);
// printf("%d\n",m);
// printf("%s\n",n);
//     return 0;
// }
// int main()
// {
//     #define max "safskksaf"
//     printf("%s\n",max);
//     printf("djfakfka\n");
//     return 0;
// }
// #include <string.h>
// int main()
// {
// char arr1[]={"abcdef"};//字符串末尾自动加\0[abcdef\0]
// char arr2[]={'a','b','c','d','e','f'};//没有\0，[abcdef]printf会一直读取，直到遇到内存第一个\0
// printf("%s\n",arr1);
// printf("%s\n",arr2);
// int len =strlen(arr2);//strlen的原理是计数，遇到\0才会结束
// printf("%d\n",len);//在'f'后面加一个'\0'就可以正常输出
//     return 0;
// }
// int main()
// {
//     printf("%C\n",'\x60');//%C是字符占位符，专门用来输出单个字符类型的数据，\x表示后续是16进制，60对应十进制是96，在ASCII码对应`
//     return 0;
// }