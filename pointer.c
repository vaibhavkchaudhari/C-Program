#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a; //pointer store  address of a
	//int *ptr;
	//ptr = &a;
	printf("value of a : %d\n",a);	//10
	printf("address of a : %p\n",&a); //address
	printf("pointer p store : %p\n",ptr);//small addres
	printf("value at pointer p : %d\n",*ptr);
	return 0;
}
