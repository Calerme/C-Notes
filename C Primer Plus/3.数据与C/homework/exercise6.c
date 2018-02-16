/* 输入您的身高（厘米），然后程序转出转换后的英寸值 */
#include <stdio.h>
int main(void)
{
  float cm;
  printf("Please enter your height(cm): ");
  scanf("%f", &cm);
  printf("你有 %f 英寸", cm / 2.54);
}
