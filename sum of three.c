#include<stdio.h>
int largest(int a,int b, int c){
    if(a>b&&a>c)
    return a;
    else if(b>c)
    return b;
    else return c;
}
int main(){
    
    printf("largest %d\n",largest(10,20,45));
return 0;
}
