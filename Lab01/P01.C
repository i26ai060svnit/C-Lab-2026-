#include <stdio.h>
int main()
{
    int p, r, t, i;

    printf("Enter the Principal:");
    scanf("%d", &p);

    printf("Enter the rate:");
    scanf("%d", &r);

    printf("Enter the time:");
    scanf("%d", &t);

    i = p * r * t / 100;

    printf("interst is :%d", i);

    return 0;
}