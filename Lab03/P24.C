#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    int n;

    printf("Enter the x:");
    scanf("%f", &x);

    printf("Enter the n:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("%.2f", 1 + x);
        break;

    case 2:
        printf("%.2f", 1 + n / x);
        break;

    case 3:
        printf("%.2f", pow(x, n));
        break;

    default:
        printf("%.2f", 1 + n * x);
        break;
    }

    return 0;
}