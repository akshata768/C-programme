// function defnition
#include <stdio.h>
int main(){
    int a,b,sum,difference,product,qutiont;
    
    printf("enter the value for a ");
    scanf("%d",&a);
    printf("enter the value for b");
    scanf("%d",&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    qutiont=a/b;
    printf("%d\n%d\n%d\n%d\n",sum, difference, product,qutiont);
    return 0;
}
    
