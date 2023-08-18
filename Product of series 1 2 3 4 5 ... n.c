#include<stdio.h>
//Product of series: 1 2 3 4 5 ... n
int main ()
{
	int a,n,product;
	product=1;
	
	printf("Enter the desired value of n: ");
	scanf("%d",&n);
	
printf("The product of th series ");

for (a=1;a<=n;a+=1)
{
	printf("%d ",a);
	product=product*a;
}
printf("is %d",product);
}