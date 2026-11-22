#include <stdio.h>
int main()
{
    int i, n, num, max = 0, smax = 0;

    while (1)
    {
        printf("How many numbers do want to enter:");
        scanf("%d", &n);

        if (n >= 2)
        {
            break;
        }
        printf("Enter at least 2 numbers.\n");
    }
    printf("Enter number 1:");
    scanf("%d", &num);
    max = num;
    smax = num;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d:", i);
        scanf("%d", &num);
        if (num > max)
        {
            smax = max;
            max = num;
        }
        else if (num > smax && num < max)
        {
            smax = num;
        }
    }

    printf("Max number is:%d\n", max);
    printf("Second Max number is:%d", smax);

    return 0;
}