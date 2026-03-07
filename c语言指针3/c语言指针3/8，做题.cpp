//记住「循环类问题（1~n 范围）用取模% n 处理边界」的思路，
//比如星期（1~7）、月份（1~12）都能用这个逻辑；

#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    a = a % 7 + 1;
    printf("%d", a);
    return 0;
}