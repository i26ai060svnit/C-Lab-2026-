#include <stdio.h>
int main()
{
    int n;
    float i, s = 1.0, a = 0.0, j, m = 0.0;
    printf("Enter the number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = 1.0;
        for (j = 1; j <= i; j++)
        {
            s = s * j;
        }
        a = i / s;
        m = m + a;
    }
    printf("Answer is %f", m);
    return 0;
}