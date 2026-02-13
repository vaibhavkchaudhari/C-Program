#include<stdio.h>

int main(){
	int mark=95;
	if(mark>=90){
		printf("Grade A");
	}else if(mark>=75){
		printf("grade B");
	}else if(mark>=60){
		printf("Grade C");
	}else if(mark>=35){
		printf("Grade D");
	}else{
		printf("Failed");
	}
	return 0;
}
