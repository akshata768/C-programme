// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a=5;
int *ptr=&a;
*ptr=*ptr+10;
printf("a is %d\n",a);
printf("address %d\n",*ptr);
return 0;
}
