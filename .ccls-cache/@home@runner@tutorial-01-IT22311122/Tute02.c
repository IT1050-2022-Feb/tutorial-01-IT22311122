/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main(void) {

  float distance, amount1, amount2, amount;  //declare variables

  printf("Enter the distance: ");   //input the diastance
  scanf("%f", &distance);

  if(distance <= 30)  //less than 30km
  {
    amount = distance * 50; 
  }
  else            //greater then 30km
  {
    amount1 = 30 * 50;
    amount2 = (distance - 30) * 40;
    amount = amount1 + amount2;
  }

  printf("Amount = %.2f", amount);    //output
  
  return 0;
}
