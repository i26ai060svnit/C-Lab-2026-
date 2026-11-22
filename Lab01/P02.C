#include <stdio.h>
int main()
{

    int s1, s2, s3, s4, s5, t, p;
    printf("Enter marks subject 1:");
    scanf("%d", &s1);

    printf("Enter marks subject 2:");
    scanf("%d", &s2);

    printf("Enter marks subject 3:");
    scanf("%d", &s3);

    printf("Enter marks subject 4:");
    scanf("%d", &s4);

    printf("Enter marks subject 5:");
    scanf("%d", &s5);

    t = s1 + s2 + s3 + s4 + s5;

    printf("Total marks:%d\n", t);

    p = t / 5;

    printf("Percentage is:%d", p);

    return 0;
}