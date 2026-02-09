#include <stdio.h>
//输入任意一个整数，计算除3后的余数
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     if(a%3==0)
//     printf("余数是0\n");
//     else if(a%3==1)
//     printf("余数是1\n");
//     else
//     printf("余数是2\n");
//     return 0;
// }

// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     switch(a%3)//必须是整型表达式
//     {
//         case 0://必须是整型常量表达式
//         printf("余数是0\n");
//         break;
//         case 1:
//         printf("余数是1\n");
//         break;
//         case 2:
//         printf("余数是2\n");
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int d =0;
//     scanf("%d",&d);
//     switch(d)
//     {
//         case 1:
//         printf("星期一");
//         break;
//         case 2:
//         printf("星期二");
//         break;
//         case 3:
//         printf("星期三");
//         break;
//         case 4:
//         printf("星期四");
//         break;
//         case 5:
//         printf("星期五");
//         break;
//         case 6:
//         printf("星期六");
//         break;
//         case 7:
//         printf("星期天");
//     }
//     return 0;
// }

// int main()
// {
//     int d =0;
//     scanf("%d",&d);
//     switch(d)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//         printf("工作日");
//         break;//break看用途是否使用
//         case 6:
//         case 7:
//         printf("休息日");
//         break;
//     }
//     return 0;
// }

// int main()
// {
//     int d =0;
//     scanf("%d",&d);
//     switch(d)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//         printf("工作日");
//         break;//break看用途是否使用
//         case 6:
//         case 7:
//         printf("休息日");
//         break;
//         default:
//         printf("输入错误");
//     }
//     return 0;
// }


//c语言有三种循环，while;for;do while
// int main()
// {
//     int a=1;
//     while(a<=10)
//     {
//         printf("%d ",a);
//         a++;
//     }
//     return 0;
// }

// int main()
// {
//     int a= 0;
//     scanf("%d",&a);
//     while(a)
//     {
//         printf("%d ",a % 10);
//         a=a/10;
//     }
//     return 0;
// }

//for(初始化;判断;调整)
// int main()
// {
//     int a=0;
//     for(a=1;a<=10;a++)//初始化只会执行一次
//     {
//         printf("%d ",a);
//     }
//     return 0;
// }

//1-100之间3的倍数之和
// int main()
// {
//     int  a=0;
//     int sum =0;
//     //for(a=1;a<=100;a++)循环100次判断100次
//     for(a=3;a<=100;a+=3)
//     {
//         //if(a%3==0)
        

//         sum +=a;
        
//     }
//     printf("%d",sum);
//     return 0;
// }

//do while循环使用的最少，最少被使用1次

// int main()
// {
//     int a =1;
//     do
//     {
//         printf("%d",a);
//         a++;
//     } while (a<=0);
    
//     return 0;
// }

//输入一个正整数，计算整数是几位数

// int main()
// {
//     int a=0;
//     int cnt=0;
//     scanf("%d",&a);
//     do
//     {
//         cnt++;
//         a/=10;
//     } while (a);
//     printf("%d",cnt);
//     return 0;
// }

//break和continue语句
//break是永久的终止循环，continue是跳过本次循环continue后面的代码，在for和while中有区别

// int main()
// {
//     int a=1;
//     while(a<=10)
//     {
//         if(a==5)
//         break;
//         printf("%d",a);
//         a++;
//     }
//     return 0;
// }

// int main()
// {
//     int a=1;
//     while(a<=10)
//     {
//         if(a==5)
//         continue;
//         printf("%d",a);
//         a++;
//     }
//     return 0;
// }

// int main()
// {
//     int a=1;
//     while(a<=10)
//     {
//         a++;
//         if(a==5)
//         continue;
//         printf("%d",a);
//     }
//     return 0;
// }

// int main()
// {
//     int i=1;
//     for(i=1;i<=10;i++)
//     {   
//         if(i==5)
//         break;
//         printf("%d",i);
//     }
//     return 0;
// }

// int main()
// {
//     int i=1;
//     for(i=1;i<=10;i++)
//     {   
//         if(i==5)
//         continue;
//         printf("%d ",i);
//     }
//     return 0;
// }

// int main()
// {
//     int a=0;
//     do
//     {
//         if(a==5)
//         break;
//         printf("%d ",a);
//         a++;
//     } while (a<=10);
    
//     return 0;
// }

// int main()
// {
//     int a=0;
//     do
//     {
//         if(a==5)
//         continue;
//         printf("%d ",a);
//         a++;
//     } while (a<=10);
    
//     return 0;
// }

// int main()
// {
//     int a=0;
//     do
//     {
//         a++;
//         if(a==5)
//         continue;
//         printf("%d ",a);
//     } while (a<=10);
    
//     return 0;
// }


//100-200的素数
// int main()
// {
//     int a=0;
//     for(a=100;a<=200;a++)
//     {
//         int c= 1;//假设a是素数
//         int b=0;
//         for(b=2;b<=a-1;b++)//判断
//         {
//             if(a%b==0)
//             {
//                 c=0;
//             break;
//             }
//         }
//         if(c==1)
//         printf("%d ",a);
//     }
//     return 0;
// }

// int main()
// {
//     int a=0;
//     for(a=100;a<=200;a++)
//     {   int b=0;
//         for(b=2;b<=a-1;b++)//判断
//         {
//             if(a%b==0)
//             {
//             break;
//             }
//         }
//         if(b>a-1)
//         printf("%d ",a);
//     }
//     return 0;
// }


//优化
// #include <math.h>
// int main()
// {
//     int a=0;
//     for(a=101;a<=200;a+=2)//少了一半数据
//     {
//         int c= 1;//假设a是素数
//         int b=0;
//         for(b=2;b<=sqrt(a);b++)//判断;sqrt开平方,<math.h>
//         {
//             if(a%b==0)
//             {
//                 c=0;
//             break;
//             }
//         }
//         if(c==1)
//         printf("%d ",a);
//     }
//     return 0;
// }

// int main()
// {
//     printf("555\n");
//     goto next;
//     printf("666\n");
//     next:
//     printf("999\n");
//     return 0;
// }

// int main()
// {
//     printf("555\n");
//     next:
//     printf("666\n");
//     goto next;
//     printf("999\n");
//     return 0;
// }

//初学少用goto，会打乱流程；但是多层循环想快速跳出，可以用goto