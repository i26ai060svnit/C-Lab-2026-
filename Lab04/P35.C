#include <stdio.h>
int main()
{
    int n, r, s, t;
    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    while (t > 9)
    {
        s = 0;
        while (t != 0)
        {
            r = t % 10;
            s = s + r;
            t = t / 10;
        }
        t = s;
    }
    printf("Answer is %d", t);

    return 0;
}