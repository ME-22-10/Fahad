#include<stdio.h>
//Pattern of 1
//           22
//           333
//           4444

int main()
{
	int i,j,a;
	a=1;
	
for (i = 1; i <= 4; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d", a);
        }
        printf("\n");
        a++;}
}