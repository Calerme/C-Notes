/* 一年约有 3.156E7 秒。输入年龄，显示该年龄合多少秒 */
#include <stdio.h>
int main(void)
{
  unsigned int SECONDS_PER_YEAR = 31560000;
  unsigned int age;
  printf("Please enter your age: \n");
  scanf("%u", &age);
  printf("You are %u seconds old!\n", SECONDS_PER_YEAR * age);

  return 0;
}
