/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int i=0, number, sum = 0;  //declare variables

  printf("Enter the 'n' you want: "); //input the number

  for(i=0 ; i<=number; i++)  //counter controlling repetition
    {
      sum = sum + i;
    }
  printf("Sum: %d", sum);  //output sum
  
  return 0;
}
