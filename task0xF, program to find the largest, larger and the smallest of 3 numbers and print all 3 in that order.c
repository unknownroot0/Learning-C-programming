// Write a C program to find the largest, larger and the smallest of 3 numbers and print all 3 in that order.



#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
 
    int largest, larger, smallest;
 
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
        if (num2 >= num3) {
            larger = num2;
            smallest = num3;
        } else {
            larger = num3;
            smallest = num2;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
        if (num1 >= num3) {
            larger = num1;
            smallest = num3;
        } else {
            larger = num3;
            smallest = num1;
        }
    } else {
        largest = num3;
        if (num1 >= num2) {
            larger = num1;
            smallest = num2;
        } else {
            larger = num2;
            smallest = num1;
        }
    }
 
    printf("The largest number is %d\n", largest);
    printf("The larger number is %d\n", larger);
    printf("The smallest number is %d\n", smallest);
 
    return 0;
}
