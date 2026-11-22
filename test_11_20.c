/*
 * 文件名：test_11_20.c
 * 功能：演示 scanf 的用法，以及它的返回值代表什么
 *
 * 运行后请从键盘输入两个整数（中间用空格或回车隔开），例如：
 *     3 5
 * 然后按回车。
 */

#include <stdio.h>   /* 引入标准输入输出库，printf 和 scanf 都来自这里 */

// int main()           /* 程序的入口函数，程序从这里开始执行 */
// {
//     int a = 0;       /* 声明整型变量 a，并初始化为 0（防止是随机值） */
//     int b = 0;       /* 声明整型变量 b，并初始化为 0 */

//     /*
//      * scanf 用来从键盘读取数据：
//      *   "%d%d"   表示要读两个十进制整数
//      *   &a, &b   & 是取地址符，告诉 scanf 把读到的值存到 a、b 所在的内存里
//      *
//      * scanf 的返回值 r 是「成功读到的数据个数」：
//      *   输入 "3 5"    -> 两个都读成功，r = 2
//      *   输入 "3 abc"  -> 只读到 1 个，r = 1
//      *   输入 "abc"    -> 一个都没读到，r = 0
//      * 如果输入出问题，r 还可能是 EOF（通常是 -1）
//      */
//     int r = scanf("%d%*c%d", &a, &b);

//     /* 把读到的 a、b 和返回值 r 都打印出来，检查结果是否正确 */
//     printf("a = %d  b = %d\nr = %d\n", a, b, r);


//     return 0;        /* 返回 0 表示程序正常结束 */
// }
// int main()
// {
//     int a = 0;       /* 声明整型变量 a，并初始化为 0（防止是随机值） */
//     while(scanf("%d",&a)==1){
//     if(a%2==1)
//     {
//         printf("jishu\n");
//     }
//     else
//     {
//         printf("oushu\n");
//     }
// }
//     return 0;
// }
// int main()
// {
//     int age = 0;
//     scanf("%d",&age);
//     if(age >= 18)
//     {
//         printf("成年");
//     }
//     else
//     {
//         printf("未成年");
//     }
// }
// int main()
// {
//     int num = 0;
//     scanf("%d",&num);
//     if(num >0)
//     {
//         printf("正数");
//     }
//     else if(num ==0)
//         printf("0");
//     else
//         printf("负数");
    
//     return 0;
// }
int main()
{
    int a = 0;
    scanf("%d",&a);
    if(a>0)
    {
        if(a%2==1)
        printf("奇数");
        else
        printf("偶数");
    }
    else
    printf("非正数");
}