#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//生成随机数
// int main()
// {
//     srand((unsigned int)time(NULL));
//     printf("%d  ",rand() % 100);
//     printf("%d  ",rand() % 100);
//     printf("%d  ",rand() % 100);
//     printf("%d  ",rand() % 100);
//     printf("%d  \n",rand() % 100);
//     return 0;
// }

//猜数字游戏
//生成随机数，判断是否猜对
void game()
{
    int guess = 0;
    int r = rand() % 100 + 1;
    int i = 0;
    time_t t1 =time(NULL);

    while(1)
    {
        i++;
        printf("猜数字:\n");
        if(scanf("%d",&guess) ==1)
        {
            if(guess > r && i < 5)
            {
                printf("大了\n");
            }
            else if(guess < r && i < 5)
            {   
                printf("小了\n");
            }
            else if(guess == r)
            {
                printf("猜对了！\n");
                break;
            }
            else
            {
                printf("本轮游戏结束\nDefeated!\n");
                break;
            }
        }
        else
        break;
    }
    time_t t2 = time(NULL);
    printf("总计耗时%ds\n",t2 - t1);

}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do{
        printf("-------------------------\n");
        printf("---------1开始游戏--------\n");
        printf("---------0退出游戏--------\n");
        printf("-------------------------\n");
        if(scanf("%d",&input) == 1)
        {
            switch(input)
        {
            case 1:
                game();
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("请输入1或0\n");
        }
        }
        else
        break;
    }
    while(input);
    return 0;
}