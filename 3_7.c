#include <stdio.h>
int main()
{
    unsigned x, y;
    printf("Enter two unsigned values: ");
    scanf("%u%u", &x, &y);
    unsigned i = 1;
    unsigned power=1;
    while (i <= y)
    {
        power*=x;
        i++;
    }
    printf("value of %u raised to the power %u is %u",x,y, power);
} 
