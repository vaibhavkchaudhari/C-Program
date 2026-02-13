#include<stdio.h>

int main()
{
	int age=19;
	int id=2;
	if(age>=18){
		if(id==1){
			printf("You Eligible For Vote");
		}else{
			printf("Bring Id");
		}
	}else{
		printf("You Can Not Vote");
	}
	return 0;
}
