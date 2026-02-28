#include<stdio.h>
void changeVariable(int *p){
	*p=50;
}
int main(){
	int b=30;
	int *ptr=&b; //pointer store  address of a
	
	changeVariable(&b);
	//int *ptr;
	//ptr = &a;
	printf("value of a : %d\n",b);	//10
	printf("address of a : %p\n",&b); //address
//	printf("pointer p store : %p\n",ptr);//small addres
//	printf("value at pointer p : %d\n",*ptr);
	return 0;
}
