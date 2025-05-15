
#include<stdio.h>
int main(){
    int a=5;
    int *b=&a;
     *b=*b+15;
    printf("a=%d\n",a);
    printf("akshata=%d\n",*b);
    return 0;
}
