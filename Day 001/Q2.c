//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    if (num2 != 0) {
        printf("Quotient: %d\n", quotient);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }
}