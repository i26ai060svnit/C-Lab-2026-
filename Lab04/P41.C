#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("Factor of %d=", n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d,", i);
        }
    }
    printf("%d", n);

    return 0;
}