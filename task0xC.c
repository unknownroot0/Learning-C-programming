// Write a C program to calculate area of square


#include <stdio.h>

int main()
{
    float side;  // declare a variable to store the side length of the square
    float area;  // declare a variable to store the area of the square

    printf("Enter the side length of the square: ");
    scanf("%f", &side);  // read the side length from the user and store it in the side variable

    // calculate the area of the square
    area = side * side;

    printf("The area of the square is %.2f.\n", area);  // print the area of the square

    return 0;
}
