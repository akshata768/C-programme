#include<stdio.h>
struct Akshata{
    char village[10];
    int postno;
};
struct Family{
    char members[10];
    int homeno;
    struct Akshata akshata;
};
int main(){
    struct Family fam;
    printf("enter the members:");
    scanf("%s",fam.members);
    printf("enter the homeno:");
    scanf("%d",&fam.homeno);
    printf("enter the village:");
    scanf("%s",fam.akshata.village);
    printf("enter postno:");
}
