#include<stdio.h>
//Program to Calculate tax on your income
int main ()
{
    int i;
	
	printf("Enter you income: ");
	scanf("%d", &i);
	
if (i<=150000)
   	{printf("The tax amount on your income is 0");
   	}   
else if (i>150000 && i<=300000)
   	{printf("The tax amount on your income is %d",i/10);
   	}
else if (i>300000 && i<=500000)
	{printf("the tax amount on your income is %d",i*2/10);
	}
else if (i>500000)
 	{printf("The tax amount on your income is %d",i*3/10);
	 }
}