// Write a C program to find whether a given year is a leap year or not.


#include <stdio.h>

int main()
{
  int yr;
 
  printf("\n Please Enter a year \n"); 
  scanf("%d", &yr);
 
  if ( yr%400 == 0) // Check if the year is divisible by 400
     printf("\n%d is a Leap Year. \n", yr); // If true, then it's a leap year
  else if ( yr%100 == 0) // Check if the year is divisible by 100 
     printf("\n%d is not. \n", yr); // If true, then it's not a leap year
  else if ( yr%4 == 0 ) // If true, then it's not a leap year
     printf("\n%d is a Leap Year. \n", yr); // Check if the year is divisible by 4
  else
     printf("\n%d is not. \n", yr);  
 
  return 0;
}
