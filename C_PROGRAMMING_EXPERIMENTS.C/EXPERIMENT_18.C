#include <stdio.h>

int main() {
    int i,j;
   scanf("%d%d", &i, &j);
   int sum = 0;
   int a[3][3];

    for(int row=0; row<i; row++) {
        for(int col=0; col<j; col++) {
            scanf("%d",&a[row][col]);
            sum += a[row][col];
        }
    }

    printf("Sum = %d", sum);
    return 0;
}