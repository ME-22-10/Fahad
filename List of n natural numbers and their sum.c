#include<stdio.h>
//List of n natural numbers and their sum
int main ()
{
	int a,n,sum;
	sum = 0;
	printf("Number of terms: ");
	scanf("%d",&n);
	
for (a=1;a<=n;a+=1)
{
	printf("%d ",a);
	sum=sum+a;
}
printf("\nThe sum of these %d natural numbers is %d",n,sum);
}