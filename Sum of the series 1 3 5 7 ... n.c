#include<stdio.h>
//Sum of the series 1 3 5 7 ... n 
int main ()
{
	int a,n,sum;
	sum=0;
	printf("Enter n : ");
	scanf("%d",&n);
	
printf("The sum of the series ");
	
for (a=1;a<=n;a+=2)
{
	printf("%d ",a);
	sum = sum + a;
}
printf("is %d",sum);
}