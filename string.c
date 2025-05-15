#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("enter the name:");
    scanf("%s",&name);
    printf("%s",name);
int length=strlen(name);
printf(" length of your name:%d\n", length);
strcpy(name,"akshata");
printf("copied as:%s\n",name);
int campre=strcmp("akshata","aku");
printf("comparision is:%d\n",campre);
strcat(name,"mugali");
printf("%s",name);
}

