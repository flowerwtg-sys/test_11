// 给定两个数，求这两个数的最大公约数
// 例如：
// 输入：20 40 
// 输出：20
#include<stdio.h>
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     while(scanf("%d %d",&num1,&num2) != EOF)
//     {
//         //找出两个数中的最小值
//         int min = (num1 < num2) ? num1 : num2;
//         for(int i = min;i >= 1; i--)
//         {
//             if(num1 % i == 0 && num2 % i == 0)
//             {
//                 printf("%d\n",i);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

//变长数组：长度是变量的数组
// int main()
// {
//     int n = 0;
//     scanf("%d",&n);
//     int arr[n];//变长数组
//     for(int i = 0;i < n;i++)
//     {
//         arr[i] = i + 1;
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//练习：多个字符从两端移动，向中间汇聚，最后消失
//Hello world!
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
// int main()
// {
//     // char arr1[] = {'H','e','l','l','o',' ','w','o','r','l','d','!'};
//     // char arr2[] = {'#','#','#','#','#','#','#','#','#','#','#','#'};
//     char arr1[] = "  Hello world!  ";
//     char arr2[] = "################";
//     //             ############\0
//     //int sz = sizeof(arr1)/sizeof(arr1[0]);
//     int sz = strlen(arr1)+1;
//     int i = 0;
//     for(i = 0;i < (sz/2);i++)
//     {
//         arr2[i] = arr1[i];
//         //arr2[sz-i-1] = arr1[sz-i-1];
//         arr2[sz-i-2] = arr1[sz-i-2];
//         for(int j = 0;j < sz;j++)
//         {
//             printf("%c",arr2[j]);
//         }
//         printf("\n");
//         sleep(1);
//         system("clear");

//     }
//     return 0;

// }

// #include <limits.h>
// int main()
// {
//     printf("%d",INT_MAX);
//     return 0 ;

// }

//杨辉三角：给出 n(1≤n≤20)，输出杨辉三角的前 n 行。
#include <stdio.h>
int main()
{
    int n = 1;
    scanf("%d",&n);
    int i = 0;
    int arr1[20] = {1,1};
    int arr2[20];
    int j = 0;
    printf("1\n");
    for(i = 1; i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            arr2[j] = arr1[j-1] + arr1[j];
        }
        arr2[0] = 1;
        for(j = 0;j < i+1;j++)
        {
            printf("%d ",arr1[j]);
        }
        printf("\n");
        for(j = 0;j < n;j++)
        {
            arr1[j] = arr2[j];
        }
    }
    return 0;
}