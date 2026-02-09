#include <stdio.h>
//关机程序
//开启后一分钟关机，输入"我是猪"取消
#include <stdlib.h>
#include <string.h>
// int main()
// {
//     char input[20]={0};//字符数组，用来存放字符串
//     system("shutdown -s -t 60");
//     again:
//     printf("请注意，你的电脑将在一分钟内关机，输入'我是猪'取消\n");
//     scanf("%s",input);//input不需要取地址,数组名就是地址
//     //判断
//     //strcmp -string compare
//     //如果两个字符串相等,strcmp会返回0
//     if(strcmp(input,"我是猪")==0)//两个字符串在比较内容时，不能使用==
//     {
//         system("shutdown -a");
//         printf("关机被取消");
//     }
//     else
//     {
//         goto again;
//     }
//     return 0;
// }

// int main()
// {
//     char input[20]={0};//字符数组，用来存放字符串
//     system("shutdown -s -t 60");
//     while(1)
//     {
//         printf("请注意，你的电脑将在一分钟内关机，输入'我是猪'取消\n");
//         scanf("%s",input);//input不需要取地址,数组名就是地址
//     //判断
//     //strcmp -string compare
//     //如果两个字符串相等,strcmp会返回0
//     if(strcmp(input,"我是猪")==0)//两个字符串在比较内容时，不能使用==
//     {
//         system("shutdown -a");
//         printf("关机被取消");
//         break;
//     }
//     }
//     return 0;
// }



//猜数字
//自动生成1-100的随机数
//根据大小进行反馈，知道猜对
// int main()
// {
//     //默认种子是1
//     printf("%d\n",rand());//伪随机
//     printf("%d\n",rand());
//     printf("%d\n",rand());
//     printf("%d\n",rand());
//     printf("%d\n",rand());
//     return 0;
// }
#include <time.h>
// int main()
// {
//     //要设置随机数的生成种子
//     srand((unsigned int)time(NULL));//程序运行起来后，设置一次就行
//     printf("%d\n",rand()%100+1);//1~100；想生成a~b之间的随机数,a+rand()%(b-a+1)
//     printf("%d\n",rand()%100+1);
//     printf("%d\n",rand()%100+1);     
//     printf("%d\n",rand()%100+1);
//     printf("%d\n",rand()%100+1);
//     return 0;
// }


void menu()
{
    printf("**********************************\n");
     printf("************* 1.play *************\n");
     printf("************* 0.exit *************\n");
    printf("**********************************\n");
}
void game()
{
    //1.生成随机数
    int r =rand()%100+1;
    //2.猜数字
    int a=0;
    int count =5;
    while(count)
    {
        printf("还剩%d次机会\n",count);
        printf("请猜数字:>");
        scanf("%d",&a);
        if(a<r)
        
            printf("猜小了\n");
        else if(a>r)
            printf("猜大了\n");
        else
        {
            printf("恭喜你猜对了,数字是%d\n",a);
            break;
        }
        count--;
    }
    if(count==0)
    printf("游戏结束,你输了\n");
}
int main()
{
    srand((unsigned int)time(NULL));//保证只调用一次
    int input =0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
        game();
        break;
        case 0:
        printf("退出\n");
        break;
        default :
        printf("选择错误\n");
        break;
        }
    }while(input);
    return 0;
}