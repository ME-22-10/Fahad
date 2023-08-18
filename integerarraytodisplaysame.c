//programme in c to input an integer array from the user and display the same.
#include<stdio.h>
int main()
{
	int a[100];
	int i, n;
	printf("Enter the size of the integer array ");
	scanf("%d", &n);
	printf("Enter the values of the integer array ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d", &a[i]) ;
	}
	
	for(i=0; i<=n-1; i++)
	{
		printf("%d ", a[i]) ;
	}
}
