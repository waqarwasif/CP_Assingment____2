#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1;
    unsigned sum = 0, count;
    for (count = 1; count <= 99; count++)
    {
        if (count % 2 != 0)
        {
            sum += count;
        }
    }
    float num = 333.546372;
    printf("%15.1f %15.2f %15.3f %15.4f %15.5f\n", num, num, num, num ,num);

    printf("\n%f", pow(2.5, 3));
    printf("\n%10.2f\n", pow(2.5, 3));
    while (i <= 20)
    {

        printf("%d", i);

        if (i % 5 == 0)
        {

            printf("\n");
        }
        else{
            printf("\t");
        }
        i++;
    }
} 




#include<stdio.h>
int main(){

    for (int i=1;i<=20;i++)
        {

            printf("%d", i);

            if (i % 5 == 0)
            {

                printf("\n");
            }
            else{
                printf("\t");
            }
            
        }
}