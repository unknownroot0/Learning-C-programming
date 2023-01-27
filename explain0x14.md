    ** The first line #include <stdio.h> is a preprocessor directive that tells the compiler to include the contents of the "stdio.h" header file. This header file contains the function prototypes for the printf and scanf functions used in the program.

    In the next line, the variables n, i, and sum are declared. n is the limit, i is the loop counter, and sum is the variable that will store the sum of the odd numbers.

    Next, the user is prompted to enter a value for n using the printf function and the value is read into the variable using the scanf function.

    The for loop starts with the initialization of the i variable to 1 and the condition that i must be less than or equal to n to keep running. The loop increments the value of i by 1 in each iteration.

    Inside the for loop, the if statement checks if the current value of i is odd or not. If the remainder of i divided by 2 is not equal to 0, it is odd and it is added to the sum. If it is even, it is not added to the sum.

    Finally, the sum is printed in the desired format using the printf function.

    The return 0; statement at the end of the main function indicates that the program ran successfully. **
