#include <stdio.h>
int main()
{
    int i, max, min, n, num;
    while (1)
    {
        printf("How many numbers do you want to enter ?;");
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
    min = num;

    for (i = 2; i <= n; i++)
    {
        printf("Enter number %d:", i);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }

    printf("Max number is:%d\n", max);
    printf("Min number is:%d\n", min);

    return 0;
}