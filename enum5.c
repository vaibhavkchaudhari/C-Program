#include<stdio.h>
enum color {Red,Green,Blue};
int main(){
	enum color c=Red;
	
	switch(c){
		case Red:
		printf("Color is Red");
		break;
		
		case Green:
		printf("Color is Green");
		break;
		
		case Blue:
		printf("Color is Blue");
		break;
	}
}

//using enum traffic light using if else
