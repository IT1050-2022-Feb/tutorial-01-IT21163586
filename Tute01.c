/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2;
  float sum,average;

  printf("Enter the sub1 Mark :");
  scanf("%d",&sub1);

  printf("Enter the sub2 Mark :");
  scanf("%d",&sub2);

  sum=sub1+sub2;
  average=sum/2.0;
  printf("Average = %.2f",average);


  
  return 0;
}

