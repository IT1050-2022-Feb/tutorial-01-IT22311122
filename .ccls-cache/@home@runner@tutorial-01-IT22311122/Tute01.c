/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) {

  int science, maths;
  float average;

  printf("Input the marks of Science: ");
  scanf("%d", &science);
  printf("Input the marks of Maths: ");
  scanf("%d", &maths);

  average = (science + maths) / 2.0;

  printf("Average: %.2f", average);

  return 0;
}
