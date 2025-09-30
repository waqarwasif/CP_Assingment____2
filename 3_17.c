#include <stdio.h>
int main()
{

    long long acc_num;
    float mort_amount,interest_rate,tot_inter_pay,tot_payable,req_month_pay;
    int mort_term,mort_term_month;

    while(1){
        printf("Enter account number (-1 to exit): ");
        scanf("%lld",&acc_num);
        if(acc_num<-1){
            printf("Enter a valid account number");
        }
        else if (acc_num==-1){
            return 0;
        }
        else{
            printf("\nEnter mortgage amount: ");
            scanf("%f",&mort_amount);
            
            printf("\nEnter mortgage terms (in years): ");
            scanf("%d",&mort_term);
            
            printf("\nEnter interest rate (as a decimal): ");
            scanf("%f",&interest_rate);

            tot_inter_pay= mort_amount*interest_rate*mort_term;
            printf("\nThe payable interest: $%.4f",tot_inter_pay);
            tot_payable= mort_amount+tot_inter_pay;
            printf("\nTotal payable : $%.4f",tot_payable);

            mort_term_month=mort_term*12;

            req_month_pay=tot_payable/mort_term_month;
            printf("\nThe required amount to pay monthly is: %.0f\n",req_month_pay);
            

        }
        
    }

}