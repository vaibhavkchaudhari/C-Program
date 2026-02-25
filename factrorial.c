#include<stdio.h>

int factorial(int num) {
    int i, fact = 1;

    for(i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}
int main(){
	int res;
	res = factorial(5);
	printf("Factorial=%d",res);
	return 0;
}


