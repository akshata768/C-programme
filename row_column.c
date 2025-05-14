#include<stdio.h>
int main(){
    int i,j,row,col;
    printf("enter the  number of row and col:");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    printf("enter the elements of matrixA:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
            
        }
    }

 for(i=0;i<col;i++){
     for(j=0;j<col;j++){
        printf("enter the element of B matrix\n");
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        c[i][j]=a[i][j]+b[i][j];
        
    }
}
     for(i=0;i<row;i++){
         for(j=0;j<col;j++){
        printf("the output is\n");
        printf("%d",c[i][j]);
    }
    printf("\n");
}
return 0;
}  
