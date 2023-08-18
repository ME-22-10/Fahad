#include<stdio.h>
//List and sum of n odd natural numbers 
int main ()
{
	int a,n,sum;
	sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
for(a=1;a<=n*2;a+=2)
{
	printf("%d ",a);
	sum=sum+a;
}
printf("\nThe sum of these %d odd natural numbers is %d",n,sum);
}