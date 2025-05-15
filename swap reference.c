#include<stdio.h>
int main(){
    int a=10,b=20,c;
    int *ptr1=&a;
    int *ptr2=&b;
    printf("before swapa=%d b=%d", a,b);
    a=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;
    printf("after swapa=%d b=%d",a,b);
}
