/* Write a C program to find the largest, larger and the smallest of 3 numbers and print all 3 in that order.


#include <stdio.h>
 
int main()
{
    int num1, num2, num3;
 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
 
    if (num1 >= num2)
    {
        if (num1 >= num3)
            printf("Largest number = %d", num1);
        else
            printf("Largest number = %d", num3);
    }
    else
    {
        if (num2 >= num3)
            printf("Largest number = %d", num2);
        else
            printf("Largest number = %d", num3);
    }
 
    if (num1 <= num2)
    {
        if (num1 <= num3)
            printf("\nSmallest number = %d", num1);
        else
            printf("\nSmallest number = %d", num3);
    }
    else
    {
        if (num2 <= num3)
            printf("\nSmallest number = %d", num2);
        else
            printf("\nSmallest number = %d", num3);
    }
 
    printf("\nLarger number = %d\n", (num1 + num2 + num3) - (num1 + num2 + num3) / 3);
 
    return 0;
}
