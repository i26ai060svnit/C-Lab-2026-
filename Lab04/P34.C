#include <stdio.h>
int main()
{
  int n, s, r;
  printf("Enter the number:");
  scanf("%d", &n);
  r = 0;
  s = 1;

  while (r <= n)
  {
    printf("%d,", r);
    s = r + s;
    r = s - r;
  }

  return 0;
}