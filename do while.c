// Online C compiler to run C program online
#include <stdio.h>
int main(){

    int num,i=1;
    printf("Enter the value of n:");
    scanf("%d",&num);
do{
    printf("%d%d=%d\n",num,i,num*i);
    i++;
}while(i<=10);
}
