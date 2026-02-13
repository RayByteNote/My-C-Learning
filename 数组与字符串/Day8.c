#include <stdio.h>
// int main()
// {
//     int math[20];//字符数组
//     char ch[10];//整型数组
//     double data[20];
//     return 0;
// }

// int main()
// {
//     // int arr1[5]={1,2,3,4,5};//完全初始化
//     // int arr2[5]={1,2,3};//不完全初始化
//     int arr1[5]={1,2,3,4,5};
//     int arr2[]={1,2,3,4,5};
//     //数组只要初始化了，就可以省略数组的大小
    
//     return 0;
// }

// int main()
// {
//     int arr1[10];
//     printf("%zd\n",sizeof(arr1));//计算的是整个数组的大小，%zd是专门打印sizeof的
//     printf("%zd\n",sizeof(int[10]));
//     return 0;
// }

// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};//有n个数据,下标就是从0开始到n-1
//     printf("%d\n",arr[5]);
//     arr[5]=60;
//     printf("%d\n",arr[5]);//[]下标引用操作符
//     return 0;
// }

// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int a=0;
//     for(a=0;a<10;a++)
//     {
//         printf("%d ",arr[a]);
//     }
//     return 0;
// }

// int main()
// {
//     int arr[8]={0};
//     int a=0;
//     //输入数据
//     for(a=0;a<8;a++)
//     {
//         scanf("%d",&arr[a]);
//     }
//     //输出数据
//     for(a=0;a<8;a++)
//     {
//         printf("%d ",arr[a]);
//     }
//     return 0;
// }

// int main()
// {
//     int arr[8]={0};
//     int a=0;
//     for(a=0;a<8;a++)
//     {
//         printf("&arr[%d]=%p\n",a,&arr[a]);//2进制:0~1；八进制:0~7;十进制:0~9;十六进制:0~15,0123456789abcdef
//     }//一维数组元素在内存中是连续存放
//     return 0;
// }

// int main()
// {
//     int arr[20]={0};
//     int i =0;
//     //如何计算一个数组的元素个数
//     //sizeof(arr);//计算的是数组的大小
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     for(i =0;i<sz;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// int main()
// {
//     //type arr_name[行][列];
//     int arr1[3][5]={1,2};
//     int arr2[3][5]={0};
//     int arr3[3][5]={1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//     int arr4[3][5]={{1,2},{3,4},{5,6}};
//     //二维数组可以省略行，但不能省略列
//     int arr5[][5]={1,2};
//     int arr6[][5]={1,2,3,4,5,6};
//     int arr7[][5]={{1,2},{3,4},{5,6}};
//     return 0;
// }

// int main()
// {
//     int arr[3][5]={1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//     printf("%d\n",arr[2][4]);
//     return 0;
// }

// int main()
// {
//     int arr[3][5]={0};
//     //输入数据
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         int j =0;
//         for(j=0;j<5;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     //输出数据
//     for(i=0;i<3;i++)
//     {
//         int j =0;
//         for(j=0;j<5;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//二维数组也是连续存放的

//在C99标准中加入了变长数组
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];//变长数组是不能初始化的
//    for (int i = 0; i <n; i++)
//    {
//        arr[i] = i;
//    }
//    for (int i = 0; i <n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <Windows.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//    char arr1[] = "666666666666666";
//    char arr2[] = "***************";
//    int left = 0;
//    /*int right = sizeof(arr1) / sizeof(arr1[0]) - 2;*/
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//睡眠函数，单位是毫秒
//        system("cls");//清理屏幕信息
//        left++;
//        right--;
//    }
//    return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 10;
//    int a = 0;
//    //在数组arr中查找n的值，找到了就打印下标，找不到就打印"找不到"
//    //暴力的方法
//    int sz = sizeof(arr) / sizeof(arr[0]) ;
//    int b = 0;//假设没找到
//    for (a = 0; a < sz; a++)
//    {
//        if (arr[a] == n)
//        {
//            printf("%d", a);
//            b = 1;
//            break;
//        }
//    }
//    /*if (arr[a] != n)*/
//    if(b==0)
//        printf("找不到");
//    return 0;
//}


//二分查找
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int l = 0;
    int r = sizeof(arr) / sizeof(arr[0]) - 1;
    int n = 17;
    bool found = false;
    while (l<=r)
    {
        int m = (l + r) / 2;
        if (n > arr[m])
        {
            l = m + 1;
        }
        else if (n < arr[m])
            r = m - 1;
        else
        {
            printf("找到了，下标是:% d", m);
            found = true;
            break;
        }
    }
    if(found==false)
    printf("Not found");
    return 0;
}//二分查找的前提是:有序
//效率更高