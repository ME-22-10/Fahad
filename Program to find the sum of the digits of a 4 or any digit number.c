#include <stdio.h>
//Program to find the sum of the digits of a 4 or any digit number
int main()
{
   int a, i, sum , remainder;
   sum=0;

   printf("Enter an integer: ");
   scanf("%d", &a);

   		i = a;

while (i != 0)
   {
      remainder = i % 10;
      sum = sum + remainder;
      i = i / 10;
   }

   printf("Sum of the digits of %d = %d \n", a, sum);                }