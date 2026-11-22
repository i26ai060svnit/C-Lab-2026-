#include <stdio.h>
int main()
{
  float v, b;
  int a;

  printf("Enter the number-1:");
  scanf("%f", &v);

  printf("Enter the number-2:");
  scanf("%f", &b);

  printf("For addition:1\nFor substration:2\nFor multiplication:3\nFor division:4\n");
  printf("Enter operation:");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    printf("%f+%f=%f\n", v, b, v + b);
    break;

  case 2:
    printf("%f-%f=%f\n", v, b, v - b);
    break;

  case 3:
    printf("%f*%f=%f\n", v, b, v * b);
    break;

  case 4:
    printf("%f/%f=%f\n", v, b, v / b);
    break;
  }

  return 0;
}