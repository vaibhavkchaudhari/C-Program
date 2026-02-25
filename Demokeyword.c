#include<stdio.h>
int main(){
	printf("Continue keyword");
	int i;
	for(i=1;i<=10;i++){
		if(i==5){
			break;  // loop stop here
		}
		
		printf("%d\n",i);
	} 
	
	printf("Continue keyword");

	int j;
	for(j=1;j<=10;j++){
	if(j==5){
		continue;
	}
	pritf("%d\n",j);
}
	
	return 0;
}


