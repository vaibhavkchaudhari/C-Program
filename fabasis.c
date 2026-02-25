#include<stdio.h>
int main(){
	int a=0,b=1,i,c;
	
	
	for(i=2;i<=5;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",c);
}

