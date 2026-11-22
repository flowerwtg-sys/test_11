#include <stdio.h>
int main()
{
    // int score = 0;
    // printf("你想要多少分?\n");
    // scanf("%d",&score);
    // printf("恭喜你得到了你想要的分数，你的分数是%d\n",score);
    // int i = 0;
    // int j = 0;
    // float f = 0.0f;
    // int r = scanf("%d%d%f",&i,&j,&f);
    // printf("i = %d  j = %d  f = %f\n  r = %d\n",i,j,f,r);
    int a = 0;
    int b = 0;
    while(scanf("%d%d",&a,&b)==2)
    {
        printf("c = %d\n",a+b);
    }
    return 0;
}
// #include <stdio.h>
// int main() {
//     char c;
//     printf("输入你刚才的内容，按回车结束：\n");
//     while ((c = getchar()) != '\n') {
//         printf("字符: '%c'  ASCII码: %d\n", c, c);
//     }
//     return 0;
// }
