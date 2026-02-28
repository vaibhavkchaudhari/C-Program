#include<stdio.h>

int main(){
	FILE *fp; 
	char name[20];
	int mark;
	
	fp = fopen("student.txt","r");	
	fscanf(fp,"Name = %s",&name);
	fscanf(fp,"Mark = %d",&mark);
	
	printf("Name = %s\n",name);
	printf("Mark = %d\n",mark);
	
	fclose(fp);
	
	printf("Data read succesfully");
	return 0;
}
