#include<stdio.h>
int main(){
    float collection,sales,coun_sales_tax,state_sal_tax,tot_tax;
    char month[20];
    while(1){
        printf("Enter total amount collected (-1 to quit):");
        scanf("%f",&collection);
        if(collection<-1){
            printf("\n Please Enter a valid collection ");
        }
        else if(collection==-1){
            return 0;
        }
        else{
            printf("Enter Month name: \n");
            scanf("%s",month);
            printf("\nTotal collection: $%.4f",collection);
            sales = collection/1.09;
            printf("\nSales: $%.4f",sales);
            
            state_sal_tax = sales * 0.04;
            printf("\nState sales tax: $%.4f",state_sal_tax);
            coun_sales_tax = sales * 0.05;
            printf("\nCountry sales tax: $%.4f",coun_sales_tax);
            tot_tax=state_sal_tax+coun_sales_tax;
            printf("\nTotal text to be paid in %s is %.4f\n\n",month,tot_tax);
              
        }
      
    }
}
