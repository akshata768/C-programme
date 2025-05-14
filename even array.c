// Online C compiler to run C program online
#include<stdio.h>
int a,size;
int evenarray(int arr[],int size)
{
    printf("even element array is:");
    for(int i=0;i<a;i++)
    if(arr[i]%3==0)
    printf("%d",arr[i]);
}
int main()
{
    printf("akshata\n");
    printf("enter the size of the array:");
    scanf("%d",&a);
    int arr[a];
    printf("enter the array element:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    evenarray(arr,a);
    return 0;
}
