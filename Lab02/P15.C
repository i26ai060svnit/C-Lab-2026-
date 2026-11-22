#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, p, t;

    printf("Enter the marks of subject 1:");
    scanf("%d", &s1);

    printf("Enter the marks of subject 2:");
    scanf("%d", &s2);

    printf("Enter the marks of subject 3:");
    scanf("%d", &s3);

    printf("Enter the marks of subject 4:");
    scanf("%d", &s4);

    printf("Enter the marks of subject 5:");
    scanf("%d", &s5);

    t = s1 + s2 + s3 + s4 + s5;

    printf("Total marks:%d\n", t);

    p = ((t) * 100) / 500;

    printf("Percentage:%d\n", p);

    if (p <= 100 && p >= 90)
    {
        printf("Division-A");
    }
    else if (p < 90 && p >= 60)
    {
        printf("Division-B");
    }
    else if (p < 60 && p >= 40)
    {
        printf("Division-C");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}