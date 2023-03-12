/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum (int no1, int no2); //declare the minimum function
int maximum(int no1, int no2); //declare the maximum function
int multiply(int no1, int no2); //declare the multiply function

int main() {
   int no1, no2; // declare the variables
   printf("Enter a value for no 1 : "); //input  the values
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2)); //function calling
   printf("%d ", maximum(no1, no2)); //function calling
   printf("%d ", multiply(no1, no2)); //function calling
   return 0;
}
int minimum (int no1, int no2) //implement the minimum functon
{
  if(no1 < no2)
  {
    return no1;
  }
  else
  {
  	return no2;
  }
}
int maximum(int no1, int no2) //implement the maximum functon
{
 if(no1 < no2)
  {
    return no2;
  }
  else
  {
  	return no1;
  }
}
int multiply(int no1, int no2) //implement the multiply functon
{
  int mul;
  mul = no1 * no2;
  return mul;
}

