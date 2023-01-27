#include <stdio.h>

int main() {
    int n, i, sum = 0;  // Declare variables for the limit, loop counter, and sum

    printf("Enter n: ");  // Prompt the user to enter a value for n
    scanf("%d", &n);  // Read the value of n into the variable

    for (i = 1; i <= n; i++) {  // Loop from 1 to n
        if (i % 2 != 0) {  // Check if the current number is odd
            sum += i;  // If it is, add it to the sum
        }
    }

    printf("1 + 3 + ... + %d = %d\n", n, sum);  // Print the sum in the desired format

    return 0;
}
