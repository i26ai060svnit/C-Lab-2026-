// program to swap two variables without using third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swaping.\n");
    printf("a is %d\n", a);
    printf("b is %d", b);
    return 0;
}