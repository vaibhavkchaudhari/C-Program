#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter First Number : ");
	scanf("%d",&a);
	
	printf("Enter Second Number :");
	scanf("%d",&b);
	
	char ch;
	printf("Enter the choice :");
	scanf(" %c",&ch);
	
	switch(ch){
		case'+':
			printf("Addition = %d",a+b);
			break;
			
			case'-':
			printf("Substraction = %d",a-b);
			break;
			
			case'*':
			printf("Multiplication = %d",a*b);
			break;
			
			case'/':
			printf("Division = %d",a/b);
			break;
			
			case'%':
			printf("Modulus = %d",a%b);
			break;
	}
	return 0;
	
}