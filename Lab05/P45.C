#include <stdio.h>
int main()
{
    int ar[10], i, p = 0, n = 0;
    printf("Enter 10 numbers\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &ar[i]);

        if (ar[i] > 0)
        {
            p++;
        }
        else if (ar[i] < 0)
        {
            n++;
        }
    }
    printf("Total positive numbers:%d\n", p);
    printf("Total negative numbers:%d\n", n);
    printf("Total zero:%d", 10 - p - n);

    return 0;
}