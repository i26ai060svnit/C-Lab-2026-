#include <stdio.h>
int main()
{
    int n;
    float c = 0.0;

    printf("Enter the amount:");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input amount cannot be negative.\n");
        return 1;
    }
    if (n <= 500)
    {
        c = n * 0.05;
    }
    else if (n > 500 && n <= 2000)
    {
        c = 35 + (n * 0.1);
    }
    else if (n > 2000 && n <= 5000)
    {
        c = 185 + (n * 0.12);
    }
    else
    {
        c = n * 0.125;
    }

    printf("Total Commission:%.2f", c);

    return 0;
}
