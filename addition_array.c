#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	int i,sum=0;
	for(i=0;i<=4;i++){
		sum += a[i]; 
	}
	printf("sum of array element = %d",sum);
}
