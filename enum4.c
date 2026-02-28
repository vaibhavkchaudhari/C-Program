#include<stdio.h>

enum Day{mon,tue,wed,ths,fri,sat,sun};

int main(){
	int i;
	char *day[]={"mon","tue","wed","ths","fri","sat","sun"};
	for(i=mon;i<=fri;i++){
	
	printf("%s\n",day[i]);
	
}
return 0;
}
