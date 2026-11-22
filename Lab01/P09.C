#include <stdio.h>
int main()
{
    int s, t, h, m;

    printf("Enter hour:");
    scanf("%d", &h);

    printf("Enter minutes:");
    scanf("%d", &m);

    printf("Enter second:");
    scanf("%d", &s);

    t = (h * 3600) + (m * 60) + s;

    printf("Total time in second:%d", t);

    return 0;
}