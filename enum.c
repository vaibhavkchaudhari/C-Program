#include<stdio.h>

enum Day{mon,tue,wed,ths,fri,sat,sun};

int main(){
	enum Day d = wed;
	printf("value of wed : %d\n",d);
	return 0;
}
