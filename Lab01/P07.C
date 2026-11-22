// program to calculate area of a triangle
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter length of base :");
    scanf("%d", &a);
    printf("Enter height :");
    scanf("%d", &b);
    printf("Area of triangle is :%.2f", a * b / 2.0);
    return 0;
}
