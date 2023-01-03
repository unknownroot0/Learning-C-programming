// C program that converts feet to meters

#include <stdio.h>

int main()
{
    float feet;  // declare a variable to store the value in feet
    float meters;  // declare a variable to store the converted value in meters

    printf("Enter the value in feet: ");
    scanf("%f", &feet);  // read the value in feet from the user and store it in the feet variable

    // convert feet to meters
    meters = feet * 0.3048;

    printf("%.2f feet is equal to %.2f meters.\n", feet, meters);  // print the result

    return 0;
}
