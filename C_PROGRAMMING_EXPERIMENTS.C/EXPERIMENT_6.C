#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);

    int c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("a = %d, b = %d", a, b);

    return 0;
}