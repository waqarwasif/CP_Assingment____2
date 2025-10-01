#include<stdio.h>
void mult(int n){
    for (int i=1;i<=100;i++){
        if (n%i==0){
            printf("\n%d",i);
        }
    }
}
int main(){
    int n;
    printf("Enter any number for their multiple in 1-100 range: ");
    scanf("%d",&n);
    mult(n);
    return 0;

}