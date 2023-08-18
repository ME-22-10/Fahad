#include<stdio.h>
//Multiplication table of any desired integer
int main ()
{
	int a,i,product;
	printf("Enter the number here: ");
	scanf("%d",&a);
	product=1;
	
for(i=1;i<=20;i+=1)
{
	product=a*i;
	printf("%d * %d = %d\n" ,a,i,product);
}
}