/* 读入一个浮点数，分别以小数形式和指数形式打印 */
#include <stdio.h>
int main(void)
{
  float flt_input;
  printf("Enter a floating-point value: ");
  scanf("%f", &flt_input);
  printf("%f\n", flt_input);
  printf("%e\n", flt_input);
  printf("%a\n", flt_input);
  return 0;
}
