// Online C compiler to run C program online
#include <stdio.h>
int main()
{
int i,n,t1=0,t2=1,t3;
printf("enter the length of fabonacci sequence to be generated:");
scanf("%d",&n);
printf("fabonacci sequence is:%d,%d",t1,t2);
for(i=3;i<=n;i++)
{
    t3=t1+t2;
    printf(",%d",t3);
    t1=t2;
    t2=t3;
}
return 0;
}




