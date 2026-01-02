#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int sum = 0;

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first natural numbers = %d %d", n, sum);

    return 0;
}