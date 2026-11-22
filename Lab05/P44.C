#include <stdio.h>
int main()
{
    int ar[10], i, e = 0;

    printf("Enter 10 numbers.\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &ar[i]);

        if (ar[i] % 2 == 0)
        {
            e++;
        }
    }
    printf("%d numbers are even\n", e);
    printf("%d numbers are odd\n", 10 - e);

    return 0;
}