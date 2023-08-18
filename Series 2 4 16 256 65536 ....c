#include<stdio.h>
#include<math.h>
//Series 2 4 16 256 65536 ...

int main ()
{ int n,i;
	long long a=2;

	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
printf("The series is: ");

for (i=1 ; i<=n ; i++)
{
	printf("%lld ",a);
	a = a * a;
}
	
}