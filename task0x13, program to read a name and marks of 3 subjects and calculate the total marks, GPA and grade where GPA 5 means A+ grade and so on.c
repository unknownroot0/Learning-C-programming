// Write a C program to read a name and marks of 3 subjects and calculate the total marks, GPA and grade where GPA 5 means A+ grade and so on.



#include <stdio.h>

int main() {
  /* Declare variables for student name, grade, GPA, and marks for English, Math, and ICT */
  char name[100], grade[3];
  float gpa, english, math, ict;

  /* Prompt user for student name */
  printf("Name: ");
  scanf("%s", name);
  /* Prompt user for student's marks in English */
  printf("Marks of English: ");
  scanf("%f", &english);
  /* Prompt user for student's marks in Math */
  printf("Marks of Math: ");
  scanf("%f", &math);
  /* Prompt user for student's marks in ICT */
  printf("Marks of ICT: ");
  scanf("%f", &ict);

  /* Calculate total marks */
  float total = english + math + ict;
  /* Calculate average marks */
  float avg = total / 3.0;

  /* Determine GPA based on average marks */
  if (avg >= 80) {
    gpa = 5;
  } else if (avg >= 70) {
    gpa = 4;
  } else if (avg >= 65) {
    gpa = 3.5;
  } else if (avg >= 50) {
    gpa = 3;
  } else if (avg >= 40) {
    gpa = 2;
  } else {
    gpa = 0;
  }

  /* Determine grade based on GPA */
  if (gpa == 5) {
    grade[0] = 'A';
    grade[1] = '+';
  } else if (gpa >= 4) {
    grade[0] = 'A';
  } else if (gpa >= 3.5) {
    grade[0] = 'A';
    grade[1] = '-';
  } else if (gpa >= 3) {
    grade[0] = 'B';
  } else if (gpa >= 2) {
    grade[0] = 'C';
  } else {
    grade[0] = 'F';
  }

  /* Add null character to end of grade string */
  grade[2] = '\0';

  /* Print total marks, GPA, and grade */
  printf("%s got %.2f in total.\n", name, total);
  printf("GPA: %.2f\n", gpa);
  printf("Grade: %s\n", grade);

  return 0;
}
