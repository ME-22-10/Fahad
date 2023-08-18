//program in c to input a string from the user and display the same.
#include<stdio.h>
int main()
{
	char a[10];
	printf("Enter your name ");
	scanf("%s", &a);
	int i;
	for(i=0; a[i]!='\0'; i++)
	{
		printf("%c", a[i]);
	}
	
}
