// to sort elements of an array


#include<stdio.h>{
int main()
{

int a[10]={1,2,3,6,5,4,7,8,9,0};
int i,j,temp=0;
for(i=0;i<=9;i++)
{
	if(a[i]>a[i++])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		

	}
}
for(j=0;j<=10;j++)
printf("%d ", j);

}
