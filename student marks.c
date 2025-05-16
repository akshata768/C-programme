#include<stdio.h>
struct Student{
    char  name[50];
    int marks[3];
};
int main(){
    struct Student students[3];
    float average;
    int i;
    for(i=0;i<3;i++){
    printf("enter student name %d:",i + 1);
    getchar();
    fgets(students[i]. name,sizeof(students[i]. name),stdin);
    printf("enter the marks of 3 subject:\n");
    for(int j=0;j<3;j++){
        printf("subject %d:",j +1);
        scanf("%d",&students[i].marks[j]);
    }
}
}
