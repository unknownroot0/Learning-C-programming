// C program that converts Celsius to Fahrenheit

#include <stdio.h>

int main()
{
    float celsius;  // declare a variable to store the temperature in Celsius
    float fahrenheit;  // declare a variable to store the converted temperature in Fahrenheit

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);  // read the temperature in Celsius from the user and store it in the celsius variable

    // convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f°C is equal to %.2f°F.\n", celsius, fahrenheit);  // print the result

    return 0;
}
