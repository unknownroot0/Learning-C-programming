/* Write a C program to check whether an alphabet is a vowel or consonant.



#include <stdio.h>

int main() {
    char ch;  // Declare a variable

    printf("Enter an alphabet: ");  
    scanf(" %c", &ch);  // Read in the alphabet and store it in the variable

    /* Check if the alphabet is a vowel or consonant */
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The alphabet is a vowel\n");
    } else {
        printf("The alphabet is a consonant\n");
    }

    return 0; 
}
