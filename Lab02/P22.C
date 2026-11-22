#include <stdio.h>
int main()
{
  int n, i, f = 1;
  printf("Enter the number for factorial :");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    f = f * i;
  }

  printf("Factorial is :%d", f);

  return 0;
}