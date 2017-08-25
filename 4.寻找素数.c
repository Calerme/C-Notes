#inclued <stdio.h>
// 寻找50以内的素数
int main()
{
    int x, y;
    for (x=2; x<=50; x++) {
        for (y=2; y<=x; y++) {
            if (x % y == 0) break;
        }
        if (y == x) {
            printf("%d ", x);
        }
    }
    return 0;
}

