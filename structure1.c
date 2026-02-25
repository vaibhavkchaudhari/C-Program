#include<stdio.h>

struct Student{
	int id;
	char name[20];
	float mark;
};

int main(){
	struct Student s1={1,"Vaibhav",85.4};
	
	printf("Id = %d\n",s1.id);
	printf("Name = %s\n",s1.name);
	printf("Mark = %.1f\n",s1.mark);
	
	
	return 0;
}
