/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  int m1,m2;
  float avg;

  printf("Enter 1st mark :");
  scanf("%d",&m1);
  printf("Enter 2nd mark :");
  scanf("%d",&m2);

  avg=(m1+m2)/2.0;

  printf("Average mark is:%.2f",avg);
  
  return 0;
}
