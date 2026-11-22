#include <stdio.h>
int main()
{
    int n, s = 0;
    while (n >= 0)
    {
        s = s + n;
        printf("Enter number:");
        scanf("%d", &n);
    }
    printf("Sum of all number is %d", s);

    return 0;
}