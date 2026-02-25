#include<stdio.h>

struct Student{
	int id;
	char name[20];
	float mark;
};

int main(){
	struct Student s1;
	
	printf("Enter ID : ");
	scanf("%d",&s1.id);
	
	printf("Enter Name : ");
	scanf("%s",&s1.name);
	
	printf("Enter Mark : ");
	scanf("%f",&s1.mark);
	
	printf("Id = %d\n",s1.id);
	printf("Name = %s\n",s1.name);
	printf("Mark = %.1f\n",s1.mark);
	
	
	return 0;
}
