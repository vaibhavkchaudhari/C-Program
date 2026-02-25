#include<stdio.h>
int main()
{
	printf("Enter Number");
	sacnf("%d",&num);
	
	int num,fact=1;
	
	for(i=1; i<=5; i++)
	{
		fact*=i;
	}
	printf("%d",fact);
	
	return 0;
}
