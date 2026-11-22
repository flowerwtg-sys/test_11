#include <stdio.h>
// int main(){
//     int day = 0;
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//         printf("今天星期一");
//         break;
//         case 2:
//         printf("今天星期二");
//         break;
//         case 3:
//         printf("今天星期三");
//         break;
//         case 4:
//         printf("今天星期四");
//         break;
//         case 5:
//         printf("今天星期五");
//         break;
//         case 6:
//         printf("今天星期六");
//         break;
//         case 7:
//         printf("今天星期日");
//         break;
//         default:
//         printf("请输入数字1~7");
//         break;
//     }
//}
// int main(){
//     int day = 0;
//     scanf("%d",&day);
//     switch(day)
//     {
//         case (day>0 && day<6)
//         printf();
//     }
//     return 0;
// }
// int main()
// {
//     int i = 1;
//     while(i>=1  &&  i<=10)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
// int main(){
//     int num = 0;
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         printf("%d ",num % 10);
//         num = num / 10;
//     }
//     return 0;

// }
// int main()
// {
//     for(int i = 1;i<=100;i++)
//     {
//         printf("%d ",i);
//     }
// }
int main(){
    int i = 0;
    int j = 0;
    for(i = 1;i <= 100;i++)
    {
        if(i % 3 == 0)
        {
            j = j + i;
        }
    }
    printf("%d\n",j);
    return 0;
}