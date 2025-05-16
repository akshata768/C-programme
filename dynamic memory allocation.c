// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() {
int i,*arr,n;
printf("enter the number of element");
scanf("%d",&n);
 arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocation is failed\n");
        return 1;
    }
    printf("enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the elemenets are:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}
