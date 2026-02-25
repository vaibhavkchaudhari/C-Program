#include<stdio.h>
union Student{
	int id;
	char name[20];
	float marks;
};
int main(){
	union Student s1 = {1,"Raj",85.4};
	
	printf("Id = %d\n",s1.id);
	printf("Name = %s\n",s1.name);
	printf("Mark = %.1f\n",s1.marks);

	return 0;
}
