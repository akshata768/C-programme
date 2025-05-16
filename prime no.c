#include<stdio.h>
int main(){
    int i,num,isprime=1;
    printf("enter the num");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("the number is not prime");
        }
    else{
        printf("the number is prime");
    }
    }
}
