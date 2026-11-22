#include <stdio.h>
int main()
{
    int a[10];
    int i, s = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the array %d:", i + 1);
        scanf("%d", &a[i]);
        s = s + a[i];
    }

    printf("Sum is:%d", s);

    return 0;
}