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
    if (p == 0)
    {
        printf("Prime");
    }
    else
        printf("Not prime");
    return 0;
}