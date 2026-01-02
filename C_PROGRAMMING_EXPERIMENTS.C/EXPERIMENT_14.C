#include <stdio.h>

int main() {
    int a[3];
    for (int row = 0; row < 5; row++) {
        scanf("%d", &a[row]);
    }
    
    for (int row = 0; row < 5; row++) {
        printf("%d ", a[row]);
    }
    return 0;
}