#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    //int i;
    // for(i=32; i<=127; i++)
    // printf("abcdef\rxxx\n");
    // printf("ab\tjjj\tyyhhyyyyyy\tqq\ta\twww\n");
    // printf("\130");
    // int len =strlen("abcdehdiwbhksf");
    // printf("%d\n",len);
    // printf("min  /*xixi*/  ute");
    // _Bool flag = false;
    // if(flag)
    // {printf("abc");
    // }
    int a = 10;
    double b = 10.0;
    float c = 10.0f;
    printf("%zd\n", sizeof(int));
    printf("%d\n", sizeof(double));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(long long));
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof'Z');
    
    return 0;
}