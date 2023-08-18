#include<stdio.h>
//Factorial of a number n
int main ()
{
	int a,n,fact;
	fact=1;
	
	printf("Enter your desired number: ");
	scanf("%d",&n);
	
for (a=n;a>=1;a=a-1)
{
	fact=fact*a;
}
printf("The factorial of %d is : %d",n,fact);
}