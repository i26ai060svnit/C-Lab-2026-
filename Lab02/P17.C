#include <stdio.h>
int main()
{
  int a, b, c;

  printf("Enter number-1:");
  scanf("%d", &a);

  printf("Enter number-2:");
  scanf("%d", &b);

  printf("Enter number-3:");
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("Max is Number-1:%d", a);
  }
  else if (b > a && b > c)
  {
    printf("Max is Number-2:%d", b);
  }
  else
  {
    printf("Max is Number-3:%d", c);
  }

  return 0;
}