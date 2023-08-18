#include<stdio.h>

int main()
{
	int sw;
	printf("enter 1 for english, 2 for arabic, 3 for punjabi ");
	scanf("%d", &sw);
	
	switch(sw)
	{
		
		case 1:
		    printf("hello");
		    break;
		case 2:
		    printf("salaam");
			break;
		case 3:
		    printf("sasriyakaal");
			break;
		default:
		    printf("incorrect opption");
			
			return 0;		    
	}
}
