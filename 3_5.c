#include <stdio.h>
int main()
{

    int sum, x;
    x = 1;
    sum = 0;
    while(x!=11){
        
        sum += x;
        x++;
    }
 
    printf("The sum is: %d", sum);
    return 0;
}
