#include<stdio.h>
#include<math.h>
//Series 2 4 8 16 128 256 ...
int main ()
{
	int a,b,c,n;
		a=2;
		printf("Enter the number of terms: ");
		scanf("%d",&n);
		
for(b=1 ; b<=n ; b++)
   {   c= pow(a,b);
	   printf("%d ",c);
   }		
}