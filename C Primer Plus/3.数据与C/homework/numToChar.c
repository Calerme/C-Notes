/* 编写一个程序 ，要求输入一个 ASCII 值，然后输出相应的字符 */
#include <stdio.h>
int main (void)
{
  int code;
  printf("请输入一个字符\n");
  scanf("%d", &code);
  printf("您输入的%d对应ASCII字符为%c\n", code, code);
  return 0;
}
