#include <stdio.h>
int main()
{
  int sum = 0, r, n;

  printf("Enter the number:");
  scanf("%d", &n);

  while (n != 0)
  {
    r = n % 10;
    sum = sum * 10 + r;
    n = n / 10;
  }

  printf("Reverse number is :%d", sum);

  return 0;
}