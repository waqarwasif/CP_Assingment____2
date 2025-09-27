#include <stdio.h>
int main()
{
    unsigned x,y;
    printf("Enter two unsigned values: ");
    scanf("%u%u",&x,&y);
    unsigned i=1;
    unsigned power=1;
    power *= x;
    ++i;
    while(i<=y){
        printf("\nyes");
        i++;
    }
    printf("value of power is %u",power);
}