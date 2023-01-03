// Write a C program to swap values of two varriables

#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int temp;

    printf("Before swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    temp = x;  // store the value of x in a temporary variable
    x = y;     // assign the value of y to x
    y = temp;  // assign the value of the temporary variable (which is the original value of x) to y

    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
