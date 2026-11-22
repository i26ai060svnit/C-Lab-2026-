#include <stdio.h>
int main()
{
  char a;
  float b, c;

  printf("Enter first no.: ");
  scanf("%f", &b);

  printf("For addition:+\nFor substration:-\nFor multiplication:*\nFor division:/\n");
  printf("Enter operation:");
  scanf("%s", &a);

  printf("Enter second no.: ");
  scanf("%f", &c);

  switch (a)
  {
  case '+':
    printf("%.2f+%.2f=%.2f", b, c, b + c);
    break;
  case '-':
    printf("%.2f-%.2f=%.2f", b, c, b - c);
    break;
  case '*':
    printf("%.2f*%.2f=%.2f", b, c, b * c);
    break;
  case '/':
    printf("%.2f/%.2f=%.2f", b, c, b / c);
    break;

  default:
    printf("invlalid");
    break;
  }

  return 0;
}