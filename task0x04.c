// C program that multiplies two floating-point numbers


#include <stdio.h>

int main()
{
    float num1, num2, result;  // declare variables to store the two numbers and the result

    printf("Enter the first number: ");
    scanf("%f", &num1);  // read the first number from the user and store it in num1

    printf("Enter the second number: ");
    scanf("%f", &num2);  // read the second number from the user and store it in num2

    result = num1 * num2;  // multiply the numbers and store the result in result

    printf("The result is: %f\n", result);  // print the result

    return 0;
}
