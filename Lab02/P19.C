#include <stdio.h>
int main()
{
  char ch;
  printf("Charcater:");
  scanf("%c", &ch);

  (ch >= 'A' && ch <= 'Z') ? printf("Capital") : printf("Small");

  return 0;
}