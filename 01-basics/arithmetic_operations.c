#include<stdio.h>

int main(void) {

    int num1, num2;
    int sum, difference, product, modulus;
    float quotient;

    // Input two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        modulus = num1 % num2;
    } else {
        printf("Error: Division or modulus by zero is not allowed.\n");
        return 1; // Exit with error code
    }

    // Display results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Modulus: %d\n", modulus);
}