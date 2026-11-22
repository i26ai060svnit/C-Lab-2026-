#include <stdio.h>
int main()
{
    int n, i, f;

    printf("Enter the number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = i * i;
        printf("%d,", f);
    }

    return 0;
}