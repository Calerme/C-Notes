#include <stdio.h>
// 寻找所有三位数中的水仙花数
int main()
{
    int num, g, s, b; // 个，十，百
    for (num=100; num < 1000; num++) {
        b = num / 100;
        s = (num % 100) / 10;
        g = num % 10;

        if (num == b*b*b + s*s*s + g*g*g) {
            printf("%d是一个水仙花数\n", num);
        }
    }
}
