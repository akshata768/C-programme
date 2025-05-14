#include<stdio.h>
int main(){
    int a, b,c=1,marks[2][2];
    printf("my marks list\n");
    printf("enter the my marks list:");
    for(a=0;a<2;a++)
        for(b=0;b<2;b++)
             scanf("%d",&marks[a][b]);
    for(a=0;a<2;a++)
    {
        printf("\nmarks of my list %d s: ",c);
        for(b=0;b<2;b++)
            printf( "%3d",marks[a][b]);
            c=c+1;
    }
    return 0;
}    
           
