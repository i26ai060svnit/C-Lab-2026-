#include <stdio.h>
int main()
{
  int b, p, n, i;

  printf("Enter the number:");
  scanf("%d", &b);

  printf("Enter the power:");
  scanf("%d", &p);

  n = b;

  for (i = 1; i < p; i++)
  {
    n = n * b;
  }

  printf("Value is:%d", n);

  return 0;
}