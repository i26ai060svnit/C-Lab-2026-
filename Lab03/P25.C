#include <stdio.h>
int main()
{
    int i, n, f;

    printf("Enter the number:");
    scanf("%d", &n);

    f = 1;
    printf("Table of %d\n", n);
    for (i = 1; i <= 10; i++)
    {
        f = n * i;
        printf("%d * %d = %d\n", n, i, f);
    }

    return 0;
}