#include <stdio.h>
int main()
{
    int m, c, p, e, cm;
    printf("Enter the marks of Mathematics:");
    scanf("%d", &m);

    printf("Enter the marks of Physics:");
    scanf("%d", &p);

    printf("Enter the marks of Chemistry:");
    scanf("%d", &c);

    printf("Enter the marks of entrance examination:");
    scanf("%d", &e);

    cm = (p / 2) + (m / 2) + (c / 2) + 2;

    printf("Cut of marks:%d", cm);

    return 0;
}