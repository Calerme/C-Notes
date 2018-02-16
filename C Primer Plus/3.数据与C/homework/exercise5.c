/* 1 个水分子的质量约为 3.0 * 10^-23g, 1 夸脱水大约有 950g。
  输入水的夸脱数，显示其中有多少水分子 */

#include <stdio.h>

int main(void)
{
  float H20_MASS = 3.0e-23;
  float GRAMS_H20_PER_QUART = 950;
  float quarts;

  printf("Enter an amount of water (in quarts): ");
  scanf("%f", &quarts);
  printf("There are %f molecules in %f quarts of water.\n", quarts * GRAMS_H20_PER_QUART / H20_MASS, quarts);

  return 0;
}
