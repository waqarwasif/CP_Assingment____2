#include <stdio.h>

int main()
{
    int sales = 4500; 
    if (sales >= 5000)
        puts("Sales are greater than or equal to $5000");
    else
        puts("Sales are less than $5000");

    int x = 1, product = 1; 
    while (x <= 10)
    {
        product *= x;
        ++x;
    }
    

    x = 1;         
    int total = 0; 
    while (x <= 100)
    {
        total += x;
        ++x;
    }
    
    int y = 1; 
    while (y < 10)
    {
        printf("%d\n", y);
        ++y; 
    }

    return 0;
}