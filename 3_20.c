#include<stdio.h>
int main(){
    int hours,overhours;
    float hourly_rate,salary,overpay;

    while(1){
        printf("\nEnter number of hours worked (-1 to end): ");
        scanf("%d",&hours);
        if (hours<-1)
        {
            printf("\nEnter valid hours !!!");

        }
        else if(hours==-1){
            return 0;
        }
        else{

            printf("\nEnter hourly rate of the worker ($00.00):");
            scanf("%f",&hourly_rate);
            if (hours > 40)
            {
                overhours=hours-40;
                overpay=overhours*hourly_rate/2;
                salary=(hours*hourly_rate) + overpay;
                printf("\nSalary is : %.3f",salary);
            }
            else{
                salary=(hours*hourly_rate);
                printf("\nSalary is : %.3f",salary);
                
            }
        }
        
    }
}
