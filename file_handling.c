#include<stdio.h>

int main(){
	FILE *fp;
	
	fp = fopen("student.txt","w"); // create file
	
	fprintf(fp,"Name = Vaibhav\n");
	fprintf(fp,"Mark : 85\n");
	fclose(fp);
	
	printf("Data written succesfully");
	return 0;
}
