#include <stdio.h>
int main()
{
    int n;
    float c;
    printf("Enter the total units consumed:");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input! Units cannot be negative.\n");
        return 1;
    }
    if (n <= 200)
    {
        c = n * 0.5;
    }
    if (n > 200 && n <= 400)
    {
        c = 100 + (n * 0.65);
    }
    if (n > 400 && n <= 600)
    {
        c = 230 + (n * 0.8);
    }
    if (n > 600)
    {
        c = 425 + (n * 1.25);
    }
    printf("Total amount to be paid:%.2f", c);
    return 0;
}

// 0-200 Re 0.50 per unit
// 210-400 Rs. 100 plus Re 0.65 per unit excess of 200
// 401-600  Rs. 230 plus Re 0.80 per unit excess of 400
// Above 600  Rs. 425 plus Rs. 125 per unit excess of 600