// Write a C program to calculate area of a circle


#include <stdio.h>
#include <math.h>

#define PI 3.14159  // define a constant for pi

int main()
{
    float radius;  // declare a variable to store the radius of the circle
    float area;  // declare a variable to store the area of the circle

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);  // read the radius from the user and store it in the radius variable

    // calculate the area of the circle
    area = PI * radius * radius;

    printf("The area of the circle is %.2f.\n", area);  // print the area of the circle

    return 0;
}
