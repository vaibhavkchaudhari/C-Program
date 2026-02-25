#include<stdio.h>
int main(){
	char name[2][20] = {};
	int i;
	printf("Enter the name :");
	for(i=0;i<2;i++){
		scanf("%s",name[i]);
	}
	for(i=0;i<2;i++){
		printf("%s\n",name[i]);
	}
	
	
	
	return 0;
}
