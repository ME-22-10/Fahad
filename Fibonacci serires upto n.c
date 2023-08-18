#include<stdio.h>
//Fibonacci serires upto n
int main ()
{
	int curr, prev, next,n;
	prev= 0 ; curr= 1;
	
	printf("Enter the number upto which fibonacci series will be displayed: ");
	scanf("%d", &n);
	
	printf("%d ",curr);
	
	
 	while (prev + curr <= n)
 	{
 		next = prev + curr ;
 		printf("%d ", next);
 		prev = curr;
 		curr = next;
	 }

}