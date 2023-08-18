#include<stdio.h>
//Pattern of    1
//             2 2
//            3 3 3 
//           4 4 4 4
 
int main()   {
	int i,j,a;
	a=1;
	
for (i = 1; i <= 4; i++) 
	{
        for (j = 1; j <= 4 - i; j++) 
		{
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", a);
        }
        printf("\n");
        a++;}
}