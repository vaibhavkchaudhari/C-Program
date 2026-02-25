#include<stdio.h>

union WashingMachine{
	int washTime;
	int rinseTime;
	int spinTime;
};

int main(){
	
	union WashingMachine w1;
	
	w1.rinseTime = 15;
	printf("Rinse mode time = %d\n",w1.rinseTime);
	
	w1.washTime = 10;
	printf("Wash mode time = %d\n",w1.washTime);
	
	w1.spinTime = 5;
	printf("Spin mode time = %d\n",w1.spinTime);
	
	
	return 0;
}
