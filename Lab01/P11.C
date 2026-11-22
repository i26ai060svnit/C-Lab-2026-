#include <stdio.h>
int main()
{
   int t, s, m, h;

   printf("Enter total second:");
   scanf("%d", &t);

   h = t / 3600;
   m = (t % 3600) / 60;
   s = t % 60;

   printf("Hour:%d\n", h);

   printf("Minutes:%d\n", m);

   printf("Second:%d\n", s);

   return 0;
}