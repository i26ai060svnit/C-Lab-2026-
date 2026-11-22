#include <stdio.h>
int main()
{
    int i, j, k;

    for (i = 10; i > 1; i -= 2)
    {
        for (j = 1; j < i + 5; j += 2)
        {
            printf(" ");
        }
        for (k = 1; k <= (11 - i); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}