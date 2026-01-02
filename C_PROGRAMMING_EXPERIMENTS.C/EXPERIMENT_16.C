#include <stdio.h>

int main() {
    int a[10], n, t;
    scanf("%d", &n);

     for(int row=0; row<n; row++) {
     scanf("%d",&a[row]);
     }

    for(int row=0; row<n-1; row++) {
        for(int col=0; col<n-1-row; col++){
            if(a[col]>a[col+1]) {
                t=a[col]; a[col]=a[col+1]; a[col+1]=t;
            }
        }
    }

    for(int row=0; row<n; row++) {
     printf("%d ",a[row]);
    }
    return 0;
}