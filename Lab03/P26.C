#include <stdio.h>
int main()
{
    int o = 0, e = 0, n, i;

    printf("Enter the N number:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            e = e + i;
        }
        else
            o = o + i;
    }

    printf("The sum of odd number:%d\n", o);
    printf("The sum of even number:%d", e);

    return 0;
}