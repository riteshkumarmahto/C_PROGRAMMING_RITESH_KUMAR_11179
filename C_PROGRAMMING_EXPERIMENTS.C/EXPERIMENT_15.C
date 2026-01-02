#include <stdio.h>

int main() {
    int a[50], n;
    scanf("%d", &n);

    for (int row = 0; row < n; row++) {
        scanf("%d", &a[row]);
    }
    int col;
    scanf("%d", &col);
    int target = 0;

    for (int row = 0; row < n; row++) {
        if (a[row] == col ) {
            printf("Element target at position %d", row + 1);
            target = 1;
            break;
        }
    }

    if (!target)
        printf("Element not target");

    return 0;
}