#inclued <stdio.h> /* 这是头文件 */
#define PI 3.14 //定义常量
int main () // 这是主函数
{
    int age = 23;
    char sex = "M";
    printf("Hello World!\n");
    // 占位输出
    printf("I'm a %c, I'm %d years old.\n", age, sex);
    print("Pi is %f.\n", PI);

    // 强制类型转换
    printf("%d", (int)1.2);
    return 0;
}
