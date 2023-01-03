// C program to perform all arithmetic operations

#include <stdio.h>

int main()
{
    int num1, num2;  // declare variables to store the two numbers
    int sum, difference, product;  // declare variables to store the result of the operations
    float quotient;  // declare a variable to store the result of the division
    int remainder;  // declare a variable to store the result of the modulus operation

    printf("Enter the first number: ");
    scanf("%d", &num1);  // read the first number from the user and store it in num1

    printf("Enter the second number: ");
    scanf("%d", &num2);  // read the second number from the user and store it in num2

    sum = num1 + num2;  // perform addition and store the result in sum
    difference = num1 - num2;  // perform subtraction and store the result in difference
    product = num1 * num2;  // perform multiplication and store the result in product
    quotient = (float)num1 / num2;  // perform division and store the result in quotient
    remainder = num1 % num2;  // perform modulus and store the result in remainder

    // print the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %f\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
