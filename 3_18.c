#include <stdio.h>
int main(){
    float sales,salary;
    while(1){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f",&sales);
        if (sales < -1){
            printf("Please Enter  valid sales!!\n");
        }
        else if (sales==-1){
            return 0;
        }
        else{
            salary = 200 + (sales*0.09);
            printf("Salary is $%.3f\n",salary);
        }

    }
}