#include<stdio.h>

enum lable{high=10,medium=5,low=1};

int main(){
	enum lable l = low;
	printf("value of low : %d\n",l);
	return 0;
}
