#include<stdio.h>

int main(){
	int choice;
	printf("Enter a Choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("Monday\n");
			break;
			
			case 2 :
			printf("Tuseday\n");
			break;
			
			case 3 :
			printf("Wendsday\n");
			break;
			
			case 4 :
			printf("Thrusday\n");
			break;
			
			case 5 :
			printf("Friday\n");
			break;
			
			case 6 :
			printf("Satarday");
			break;
			
			case 7 :
			printf("Sunday\n");
			break;
			
			default :
				printf("Invalid Choice ! Plese Enter Number between 1 to 7");
	}
	
	return 0;
}