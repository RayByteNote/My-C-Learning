#include <stdio.h>
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     if(a%2==1)//==是判断相等，=是赋值
//     printf("%d是奇数",a);
//     else
//     printf("%d是偶数",a);
//     return 0;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     if(a%2)//1 0
//     printf("%d是奇数");
//     return 0;
// }

//输入一个年龄，>=18输出成年，否则未成年
// int main()
// {
//     int age =0;
//     scanf("%d",&age);
//     if(age>=18)
//     printf("成年");
//     else
//     printf("未成年");
//     return 0;
// }

// int main()
// {
//     int age =0;
//     scanf("%d",&age);
//     if(age>=18)//默认情况，if后面只能加一条语句，否则需要{},叫做程序块，或者复合语句
//     {
//         printf("成年\n");
//         printf("可以谈恋爱");
//     }
//     else//也叫程序块，或者复合语句
//     {
//         printf("未成年\n");
//         printf("不能谈恋爱");
//     }
//     return 0;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     if(a==0)
//     printf("是零");
//     else if (a>0)
//     printf("正数\n");
//     else
//     printf("负数\n");
//     return 0;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",a);
//     if(a>=0)
//     {
//         if(a>0)
//         printf("正数\n");
//         else
//         printf("是零");
//     }
//     else
//     printf("负数");
//     return 0;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     if(a>0)
//     {
//         if(a%2==1)
//         printf("奇数\n");
//         else
//         printf("偶数");
//     }
//     else
//     printf("负数");
//     return 0;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     if(a<18)
//     printf("少年");
//     else if(a<=44)
//     printf("青年");
//     else if(a<=59)
//     printf("中老年");
//     else if(a<=89)
//     printf("老年");
//     else
//     printf("老寿星");
//     return 0;
// }
//else总会跟最近的if匹配

// int main()
// {
//     int a=10;
//     //如果一个变量和常量值相比较时，把常量放在左边不容易看错
//     if(5==a)
//     printf("666");
//     return 0;
// }

//i<j<K不要这样写，他是从左到右的，可以i < j && j < k

// int main()
// {
//     int a= 0;
//     int b =0;
//     scanf("%d",&a);
//     // if(a>5)
//     // b=3;
//     // else 
//     // b=-3;
//     b=(a>5 ? 3 : -3);//条件操作符
//     printf("%d\n",b);
//     return 0;
// }

// int main()
// {
//     int a= 0;
//     int b= 0;
//     int c= 0;
//     scanf("%d %d",&a,&b);
//     // if(a>b)
//     // c=a;
//     // else
//     // c=b;
//     c=(a>b ? a : b);
//     printf("%d\n",c);
//     return 0;
// }

//逻辑操作符 &&并且  ||或者  !相反

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     // if(a)//判断为真会打印
//     // printf("666");
//     if(!a)//判断为假会打印
//     printf("666");

//     return 0;
// }

// int main()
// {
//     int m =0;
//     scanf("%d",&m);
//     if(m>=3&& m<=5)
//     printf("春天\n");
//     return 0;
// }

// int main()
// {
//     int m =0;
//     scanf("%d",&m);
//     if(m==12||m==1||m==2)
//     printf("冬天");
//     return 0;
// }

//判断闰年
// int main()
// {
//     int y=0;
//     scanf("%d",&y);
//     // if(y%4==0&&y%100!=0)
//     // printf("闰年\n");
//     // else if(y%400==0)
//     if(y%4==0&&y%100!=0||y%400==0)
//     printf("闰年\n");
//     else
//     printf("平年\n");
//     return 0;
// }

//短路:左边的结果确定了，不用看右边；左边为假，右边就不用算了；a&&b或者a||b