#include <stdio.h>

int main() {
    float r;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    int area = 3.14 * r * r;

    printf("Area of circle = %.2f", area);

    return 0;
}