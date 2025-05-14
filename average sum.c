// Online C compiler to run C program online
#include<stdio.h>
int a=5,i,sum=0,r;
int average()
{
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/a;
    return avg;
}
int main()
{
    printf("akshata\n");
    printf("enter element 5 in array:");
    int r=average();
    printf("average all array element: %d",r);
    return 0;
}
