#include<stdio.h>
int main(){
	int a[3]={10,30,40};
	int *p = a;
	printf("value of a : %d\n",*p);
	printf("value of a : %d\n",*(p+1));	
	printf("value of a : %d\n",*(p+2));	
	

	return 0;
}
