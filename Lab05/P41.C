#include <stdio.h>
int main()
{
    int i, j, k, l;

    for (i = 1; i <= 4; i++)
    {
        for (l = 4 - i; l >= 0; l--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = j - 2; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }
    return 0;
}