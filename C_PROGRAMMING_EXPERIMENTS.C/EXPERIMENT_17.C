#include <stdio.h>

int main() {
    int i,j;
    scanf("%d%d", &i, &j);
    int a[3][3];

    for(int row=0; row<i; row++) {
        for(int col=0; col<j; col++) {
            scanf("%d",&a[row][col]);
        }
    }
    for(int row=0; row<i; i++) {
        for(int col=0;col<j;col++) {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }
    return 0;
}