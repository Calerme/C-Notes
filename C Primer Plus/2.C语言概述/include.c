#include <stdio.h>
/* include 不是 C 语言语句，# 表明这一行是在编译器拉手之前 由 C 预处理器处理的语句 */

int main(void)
{
  int num;
  num = 1;
  printf("I am a simple ");
  printf("computer.\n");
  printf("My favorite number is %d because it is first.\n", num);
}
