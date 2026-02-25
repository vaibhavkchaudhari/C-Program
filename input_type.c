#include<stdio.h>
int main()
{
	int id;
	float salary;
	char grade;
	char name[20];
	
	printf("Enter id :");
	scanf("%d",&id);
	
	printf("Enter salary :");
	scanf("%f",&salary);
	
	printf("Enter grade :");
	scanf(" %c",&grade);
	
	printf("Enter name :");
	scanf("%s",&name);
	
	printf("\n ID=%d \n salary=%f \n grade=%c \n name=%s",id, salary, grade, name);
	
	return 0;
}
