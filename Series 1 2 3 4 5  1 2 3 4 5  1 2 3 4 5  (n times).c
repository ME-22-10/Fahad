#include<stdio.h>
//Series 1 2 3 4 5  1 2 3 4 5  1 2 3 4 5  (n times)
int main ()
{
	int i,j,n;
	
	printf("How many times do you want the series to be repeated? ");
	scanf("%d",&n);
	
	
for (i=1 ; i<=n ; i++)
	{   for (j=1 ; j<=5 ; j++)
			{
				printf("%d ",j);
			}   
			
			printf("  ");        
	}
}
	

	
