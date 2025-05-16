// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
int main(){
int num,remainder,result=0,original;
printf("enter the num\n");
scanf("%d",&num);
original=num;
while(num!=0){
remainder=num%10;
result=result+remainder*remainder*remainder;
num=num/10;
}
if(original==result){
    printf("%d the number is armstong numbe.\n",original);
}
else{
    printf("%d,the number is not armstong number.\n",original);
}
}
