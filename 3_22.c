#include<stdio.h>
int main(){
    int num,flag=0; 
    printf("Enter number for prime number check  "); 
    scanf("%d",&num);
    if (num<0){
        printf("Enter a positive integer");
    }
    else if(num==0 || num==1){
        printf("The number is niether defined as a composite nor as a prime number");
    }
    else{
        for (int i = 2 ; i<=num/2 ;i++){
            if (num%i==0){
                flag+=1;
            }
            else{
                flag = flag;
            }
        }
        if (flag==0){
            printf("\n%d is a prime number.",num);
        }
        else{
            printf("\n%d is not a prime number.",num);
        }
    }
    return 0;
}    