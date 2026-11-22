#include <stdio.h>
int main()
{

    int n, i, p = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            p = 1;
    }
    if (n == 1)
    {
        printf("1 number is neither prime or composite");
    }
    else if (n == 2)
    {
        printf("%d is Prime", n);
    }

    else if (p == 0)
    {
        printf("%d is Prime", n);
    }
    else
        printf("%d is Composite", n);
    return 0;
}