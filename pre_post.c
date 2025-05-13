#include <stdio.h>

int main() {
    int a = 10, b = 10;
    int x, y;

    x = ++a;  
    y = b--;  

    printf("After pre-increment: a = %d, x = %d\n", a, x);
    printf("After post-decrement: b = %d, y = %d\n", b, y);

    return 0;
}
