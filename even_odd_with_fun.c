#include<stdio.h>
void checkEvenOdd(int num)
{
	if(num%2==0)
	{
		printf(" Is Even Number");
	}else{
		printf("Is Odd Number");
	}
	
}
int main()
{
	checkEvenOdd(5);
	return 0;
}
