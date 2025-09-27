#include<stdio.h>
int main(){

    int z=100,sum=0 ;
    while(z>=0){
        sum+=z;
        z--;
    }
    printf("%d",sum);
