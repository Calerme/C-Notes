#include <stdio.h>
void foo(void); /* ISO/ANSI C 函数原型 */
int main(void)
{
  printf("Hello ");
  foo();

  return 0;
}

// 在这里定义函数
void foo(void) {
  printf("C");
}
