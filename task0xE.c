// C program that calculates the area of a rectangle


#include <stdio.h>

int main()
{
    float length;  // declare a variable to store the length of the rectangle
    float width;  // declare a variable to store the width of the rectangle
    float area;  // declare a variable to store the area of the rectangle

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);  // read the length from the user and store it in the length variable

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);  // read the width from the user and store it in the width variable

    // calculate the area of the rectangle
    area = length * width;

    printf("The area of the rectangle is %.2f.\n", area);  // print the area of the rectangle

    return 0;
}
