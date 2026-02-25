#include<stdio.h>
int main(){
	int arr[5]={10,20,30,90,60};
	int max=arr[0],i;
	for(i=1;i<5;i++){
		if(max<arr[i]){
			max = arr[i];
		}
		printf("Max array is: %d\n",max);	
	}
	return 0;
}
