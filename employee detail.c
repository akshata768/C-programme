#include<stdio.h>
struct Address{
    char akshata[10];
    int pin;
};
struct Employee{
    char members[10];
    int homeno;
    struct Address address;
};
int main(){
    struct Employee emp;
    printf("enter the employe members:");
    scanf("%s",emp.members);
    printf("enter the homeno:");
    scanf("%d",&emp.homeno);
    printf("enter the akshata:");
    scanf("%s",emp.address.akshata);
    printf("enter pin:");
}
