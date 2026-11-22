#include <stdio.h>
int main()
{
    char a;

    printf("Enter the charcter:");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
    {
        printf("Capital charcter");
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("Small chacter");
    }
    else if (a >= '0' && a <= '9')
    {
        printf("Numbers");
    }
    else
    {
        printf("Special symbol");
    }

    return 0;
}