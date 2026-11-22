#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter tempreture in degree F :");
    scanf("%f", &f);
    c = (f - 32) * (5.00 / 9);
    printf("%.2f", c);
    return 0;
}