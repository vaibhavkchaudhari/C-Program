#include<stdio.h>
int main(){
	int num, rev=0,rem, temp;
	
	printf("Enter Number : ");
	scanf("%d",&num);
	temp=num;
	
	while(num>0){
		rem = num%10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	if(temp==rev){
		printf("The %d number is palindrom",temp);
	}else{
		printf("The %d Number is not Palindrom",temp);
	}
	return 0;
}
