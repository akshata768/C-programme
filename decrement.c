// Online C compiler to run C program online
#include <stdio.h>

int main() {
int number[]={10,20,30,40,50};
int*ptr=number;
printf("value at ptr:%d\n",*ptr);
ptr--;
printf("value at ptr after increment:%d\n",*ptr);
(*ptr)--;
printf("value at ptr after incementing the value:%d\n",*ptr);
}
