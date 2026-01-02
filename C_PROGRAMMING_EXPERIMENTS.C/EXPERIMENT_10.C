#include <stdio.h>

int main() {
    int x, y, result;
    char choice;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Choose operation (+ - * /): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '+':
            result = x + y;
            printf("Addition = %d", result);
            break;

        case '-':
            result = x - y;
            printf("Subtraction = %d", result);
            break;

        case '*':
            result = x * y;
            printf("Multiplication = %d", result);
            break;

        case '/':
            if (y != 0) {
                result = x / y;
                printf("Division = %d", result);
            } else {
                printf("Cannot divide by zero");
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}