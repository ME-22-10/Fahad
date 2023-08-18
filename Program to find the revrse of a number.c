#include <stdio.h>
//Program to find the revrse of a number

int main() {

  int i, rev, rem;
  rev=0;

  printf("Enter an integer number: ");
  scanf("%d", &i);

  while (i != 0) 
  {
    rem = i % 10;
    rev = rev * 10 + rem;
    i /= 10;
  }

  printf("Reversed number = %d", rev);

  return 0;
}