#include <stdio.h>
#include <stdlib.h>
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);
int main() {
    int num1, num2;
    char symbol;
    printf("Enter num1:  ");
    scanf("%d", &num1);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &symbol);
    printf("Enter num2:  ");
    scanf("%d",&num2);
    switch (symbol) {
        case '+':
            printf("Answer: %d\n", add(num1, num2));
            break;
        case '-':
            printf("Answer: %d\n", subtract(num1, num2));
            break;
        case '*':
            printf("Answer: %d\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero!\n");
                break;
            }
            printf("Answer: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}
int add(int num1, int num2) {
    return num1 + num2;
}
int subtract(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
float divide(int num1, int num2) {
    return ((float)num1) / ((float)num2);
}