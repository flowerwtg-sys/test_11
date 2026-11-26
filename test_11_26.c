// #include <stdio.h>
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a > b && a > c)
//     {
//         if(b > c)
//         printf("%d %d %d\n",a,b,c);
//         else
//         printf("%d %d %d\n",a,c,b);
//     }
//     else if(b > a && b > c)
//     {
//         if(a > c)
//         printf("%d %d %d\n",b,a,c);
//         else
//         printf("%d %d %d\n",b,c,a);
//     }
//     else
//     {
//         if(b > a)
//         printf("%d %d %d\n",c,b,a);
//         else
//         printf("%d %d %d\n",c,a,b);
//     }
//     return 0;
// }
// 
// #include <stdio.h>

// int main()
// {
// 	int i = 0;
// 	for (i = 0; i<10; i++)
// 	{
// 		if (i = 5)
// 			printf("%d ", i);
// 	}
// 	return 0;
// } 
// #include <stdio.h>

// int main() {
//     int a, b;
//     while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//         // 64 位输出请用 printf("%lld") to 
//         if(a > b)
//         printf("%d>%d\n",a,b);
//         else if(a < b)
//         printf("%d<%d\n",a,b);
//         else
//         printf("%d=%d\n",a,b);
//     }
//     return 0;
// }
//失败样本1
// #include <stdio.h>

// int main() {
//     int a = 0;
//     while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//         // 64 位输出请用 printf("%lld") to 
//         for(int i = 1;i <= a;i++)
//         {
//             printf("*");
//         }
//     }
//     return 0;
// }
//样本2
// #include <stdio.h>

// int main() {
//         while(1)
//         {
//             int a = 0;
//             scanf("%d",&a);
//             for(int i = 1;i <= a;i++)
//             {
//                 printf("*");
//             }
// 			printf("\n");
//         }
//     return 0;
// }

//样本3成功
// #include <stdio.h>
// int main() {
//     int a = 0;
//     while(scanf("%d",&a) != EOF)
//      {
//         for(int i = 1;i <= a;i++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
// 	int arr[]={1,2,3,4,5};
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(int i = 0;i < sz;i++)
// 	{
// 		printf("arr[i] = %d &arr[i] = %p\n",arr[i],&arr[i]);

// 	}
// 	return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     int i = 0;
//     scanf("%d",&x);
//     if(x >= 0 && x <= 1000)
//     {
//         if(x % 2 == 0)
//             i++;
//         else if(x > 4 && x <= 12)
//             i++;
//         int a = (i == 2);
//         int b = (i >= 1);
//         int c = (i == 1);
//         int d = (i == 0);
//         printf("%d %d %d %d\n",a,b,c,d);   
//     }
//     return 0;
// }
 #include <stdio.h>
// int main()
// {
//     int y = 0;
//     int m = 0;
//     int i = 0;
//     scanf("%d %d",&y,&m);
//     if((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0))
//     {
//         //runnian
//         i++;
//     }
//     //else//feirunnian
//     if(m != 2)
//     {
//         if(m % 2 == 1 && m <= 7 || m % 2 == 0 && m > 7)
//             printf("31");//1 3 5 7 8 10 12
//         else if(m % 2 == 1 && m > 7  ||m % 2 == 0 && m <= 7)
//             printf("30");//9 11 4 6
//     }
//     else if(i && m ==2)
//         {
// 			printf("29\n");
// 		}
//     else
//         printf("28");
        
//     return 0;
// }
//判断for循环中i的变化
// int main(){
// 	int i = 0;
// for (  i = 0;i < 3; i++) {
//     printf("循环第 %d 次\n", i);
// }
// printf("循环结束\n");
// printf("%d\n",i);
// return 0;
// }
#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    while(scanf("%d",&n) != EOF)
    {
        int i = 1;
        for(int j = 0;n - j > 0;j++)
        {
            m += n-j;
            for(;i<=m;i++)
            {
                if(i<10)
                {
                    printf("0%d",i);
                }
                else
                {
                    printf("%d",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
            






        
//         int m = 1;//n的阶乘
//         for(int i = 1;i <= n;i++)
//         {
//             m *= i;
//         }
//         for(int i = 1; i <= m;i++)
//         {
//             if(i < 10 && i <= n)
//             {
//                 printf("0%d",i);
//             }
//             else if(i < 10 && i > n && i <= (n-1)*n)
//                 printf("0%d",i);
            
//             else if()
//             {
//                 printf("%d",i);
//             }
//         }








        
//         if(n < 10)
//         {
//             int j = 0;
//             while(j <= n)
//             {
//                 j++;
//                 printf("0%d",j);
//             }
//         }
//         if(2 * n - 1 < 10)
//         {
//             printf("%0d")
//         }
            
//     }
//     return 0;
// }