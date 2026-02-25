//#include<stdio.h>
//int main(){
//	int i,count=0,n;
//	printf("Enter Number : ");
//	sacnf("%d",&n);
//	
//	for(i=1;i<=n;i++){
//		if(n%i==0){
//			count++;
//		}
//	}
//	if(count==2){
//		printf("the number %d is prime",n);
//	}else{
//		printf("The number %d is not prime",n);
//	}
//	return 0;
//}

#include<stdio.h>
int main(){
	int i,num;
	printf("Enter the number");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i==0){
			printf("Nuber is not prime");
			break;
		}
	}
	if(i==num){
		printf("Nuber is a prime number");
	}
	return 0;
}
