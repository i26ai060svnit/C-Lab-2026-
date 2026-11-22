#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, t, p = 0, r;
    printf("To check number is ARMSTRONG number or not.\n");
    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    while (t > 0)
    {
        t = t / 10;
        p++;
    }
    t = n;
    while (t != 0)
    {
        r = t % 10;
        r = (int)round(pow(r, p));
        sum = sum + r;
        t = t / 10;
    }
    if (sum == n)
    {
        printf("%d is ARMSTRONG number", n);
    }
    else
    {
        printf("%d is not ARMSTRONG number", n);
    }

    return 0;
}