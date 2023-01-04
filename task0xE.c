// Write a c program to convert days to years, weeks and months


#include <stdio.h>

#define DAYS_IN_YEAR 365  // define a constant for the number of days in a year
#define DAYS_IN_MONTH 30  // define a constant for the number of days in a month

int main()
{
    int days;  // declare a variable to store the number of days
    int years;  // declare a variable to store the number of years
    int weeks;  // declare a variable to store the number of weeks
    int months;  // declare a variable to store the number of months

    printf("Enter the number of days: ");
    scanf("%d", &days);  // read the number of days from the user and store it in the days variable

    // calculate the number of years
    years = days / DAYS_IN_YEAR;

    // calculate the number of weeks
    weeks = (days % DAYS_IN_YEAR) / 7;

    // calculate the number of months
    months = ((days % DAYS_IN_YEAR) % 7) / DAYS_IN_MONTH;

    printf("%d days = %d years, %d weeks, %d months\n", days, years, weeks, months);

    return 0;
}
