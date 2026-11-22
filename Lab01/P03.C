#include <stdio.h>
int main()
{
    int b, h, o, t;

    printf("Enter the basic salary:");
    scanf("%d", &b);

    printf("Enter the HRA:");
    scanf("%d", &h);

    printf("Enter the other allowances:");
    scanf("%d", &o);

    t = b + h + o;

    printf("Gross salary:%d", t);

    return 0;
}