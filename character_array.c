//program in c to display contents of a character array.
#include<stdio.h>
int main()
{
	char a[]= "kamran";
	int i;
	for(i=0; a[i]!='\0'; i++)
	{
		printf("%c", a[i]);
	}
}
