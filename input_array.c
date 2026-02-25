#include<stdio.h>
int main(){
	int arr[5];
	int i;
	
	for(i=0;i<=5;i++){
		printf("Enter array elements : ");
		sacnf("%d",&arr[i]);
	}
	printf("print array elements\n: ");
	for(i=0;i<=5;i++){
		printf("%d\n",arr[i]);
		
	}
	return 0;
}
