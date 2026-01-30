#include <stdio.h>
// int main()
// {
//     int* p =NULL;//定义一个指向int类型的指针变量p，初始化为NULL
//     return 0;
// }
// int main()
// {
//     int input =0;//定义一个变量，初始值为0
//     printf("要不要好好学习(1/0)");
//     scanf("%d",&input);//读取用户输入的整数，把用户输入的值存入input
//     if(input==1)//判断input的值是否等于1
//     printf("好offer");
//     else//如果不等于1
// printf("烤地瓜");
//     return 0;
// }
// int main()
// {
//     int line = 0;
//     while(line<20000)//while循环当line<20000时重复执行循环内容
// {
//     printf("write code:%d\n",line);
//     line ++;//每次循环后，line自增1
// }
// if(line>=20000)//判断line是否>=20000
// {
//     printf("good");//满足条件
// }
//     else
// {
//     printf("继续加油");//循环正常结束，这部分不会被执行
// }
//     return 0;
// }
// int Add(int x,int y)//定义一个函数名为Add，接受两个int类型的参数x和y，返回他们的和
// {
//     int z=0;//定义整形变量z，初始化
//     z = x+y;//计算x与y的和，赋值给z
//     return z;//计算结果返回给调用者
// }
// int main()
// {
// int n1 =0;
// int n2 =0;
// scanf("%d %d",&n1,&n2);
// int sum =Add(n1,n2);//调用Add函数
// printf("%d\n",sum);
//     return 0;
// }
// #include <stdbool.h>//引入头文件
// int main()
// {
//     _Bool is =true;//定义布尔类型变量is，赋值为true
//     if(is)//判断is是否为真
//     printf("666");
//     else
//     printf("999");
//     return 0;
// }
// #include <string.h>//引入头文件
// int main()
// {                          //\t是转义字符，\123是八进制转义字符，所以一共有7个有效字符
//     printf("%d\n",strlen("c:\test\123"));//strlen是计算有效字符数，不包括\0
//     return 0;
// }
// int main()
// {
//     short s =3;//short是短整型，占2个字节
//     int b =10;//int是整型，占4字节
//     printf("%zd\n",sizeof(s=b+1));//sizeof是运算符，计算表达式结果类型所占字节数
//                    //s=b+1不会被运算，b+1是整型，被赋值给s，sizeof计算的是s（short类型）的字节数为2
//     printf("s=%d\n",s);//sizeof没被执行，所以s的初始值是3
//     return 0;
// }
// int main()
// {
//     signed short int a =32767;//signed short int是有符号短整型，可简化为short
//                        //short的取值范围为-32768-32767，a被赋值32767表示最大正数
//     printf("%d",a);
//     return 0;
// }
