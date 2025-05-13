#include <stdio.h>

int main() {
    int marks;

    
    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    
    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1;
    }

    
    if (marks > 75) {
        printf("Distinction\n");
    } else if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
