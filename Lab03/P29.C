#include <stdio.h>
int main()
{

    int sum = 0, n, r, t;

    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {

        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if (t == sum)
    {
        printf("Palindrom number");
    }
    else
        printf("Not palindrom");

    return 0;
}