//program in c to search an array using functions (passing array to a function).S
#include<stdio.h>
int array_search(int [], int, int);

int  main()
{
    int a[]={2,3,1,6, 3};
    int x, n, l;
	n=5;
	printf("Enter the value you wish to search ");
	scanf("%d", &x);
	l=array_search(a, x, n);
	
	if(l==1)
	    printf("Found");
	else
	    printf("Not found");    
}
int array_search(int arr[], int number, int size)
{
	int i, flag=0;
	for(i=0; i<=size; i++)
	{
		if(number==arr[i])
		{
			flag=1;
			break;
		}
	}
	return flag;
}
