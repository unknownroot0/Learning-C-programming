// C program that prints the ASCII


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;  // declare a variable to store the character
    int i;  // declare a variable to store the integer
    float f;  // declare a variable to store the float

    printf("Enter a character: ");
    scanf("%c", &c);  // read the character from the user and store it in the c variable
    printf("The ASCII value of '%c' is %d.\n", c, c);  // print the ASCII value of the character

    printf("Enter an integer: ");
    scanf("%d", &i);  // read the integer from the user and store it in the i variable
    printf("The ASCII value of %d is %d.\n", i, i);  // print the ASCII value of the integer

    printf("Enter a float: ");
    scanf("%f", &f);  // read the float from the user and store it in the f variable
    printf("The ASCII value of %.2f is %d.\n", f, (int)f);  // print the ASCII value of the float

    return 0;
}
