#include<stdio.h>
int main(){
	int a[5]={10,20,30,40,50};
	printf("%d\n",a[2]);
	printf("%d\n",a[0]);
	int i;
	
	for(i=0; i<5; i++){
		printf("%d\n",a[i]);
	}
	
	
	printf("Reverse array list\n");
	for(i=4; i<=0; i--){
		printf("%d\n",a[i]);
	}
	return 0;
}
