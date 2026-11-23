#include <stdio.h>
// int main(){
//     int num = 1;
//     do
//     {
//         printf("%d ",num);
//         num++;
//     }
//     while(num <= 10);
//     return 0;
// }
//输入一个正整数，判断这个数是几位数。
// int main(){
//     int num = 0;
//     int i = 0;
//     scanf("%d",&num);
//     do
//     {
//         i++;
//         num /= 10;
//     }
//     while(num != 0);
//     printf("%d\n",i);
//     return 0;
// }
//找出100~200之间的素数，并打印在屏幕上。
//num取模从2~num，若得0，则j++
//若j=1结束循环，则num为素数,打印出来
// int main(){
//     int num = 100;
//     do{
//         int j = 0;                      /* 每轮必须清零，否则会一直累加 */
//         for(int i = 2 ;i <= num;i++){
//             if(num % i == 0)
//             j++;
//         }
//         if(j == 1)
//             printf("%d ", num);
//         num++;
//     }
//     while(num <= 200);
//     printf("\n");
//     return 0;
//}
int main()
{
    next:
    printf("xixi\n");
    goto next;
    printf("www\n");
    printf("wdi\n");
    return 0;
}
