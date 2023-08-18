#include<stdio.h>
//Pattern of   1
//            21      
//           321
//          4321

int main ()
{
	int i, j ,n;
	
	
	for (i=1 ; i<=4 ; i++)
	{	for (j=1 ; j <= 4 - i ; j++)
		{
			printf(" ");
		}
	 	for (j=1 ; j<=i ; j++)
		{	printf("%d", 1 + i - j);
		}
		printf("\n");
	}
	
	}