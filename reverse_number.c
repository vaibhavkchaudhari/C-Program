#include<stdio.h>

int reverseNumber(int num) {
    int rev = 0, rem;

    while(num > 0) {
        rem = num % 10;       
        rev = rev * 10 + rem;  
        num = num / 10;        
    }

    return rev;   
}
int main(){
	int result = reverseNumber(123);
	printf("Reversed number of %d",result);
	
	return 0;
}
               
    


