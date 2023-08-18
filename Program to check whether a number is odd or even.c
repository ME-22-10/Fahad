#include<stdio.h>
//Program to check whether a number is odd or even
int main ()
{
	int a, r;
	printf("Enter the number: ");
	scanf("%d",&a);
	r=a%2;
if (r==0)
    printf("The number %d is even",a);
else 
    printf("The number %d is odd",a);    }
