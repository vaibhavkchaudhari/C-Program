//write a function to find square of number with arg no return.
#include<stdio.h>
void squareNum(int n)
{
	printf("Square of number = %d",n*n);
}
int main()
{
	squareNum(5);
	return 0;
}

//write a fun check nuber is even or odd no return with argument.
#include<stdio.h>
void checkEvenOdd(int num)
{
	if(num%2==0)
	{
		printf(" Is Even Number");
	}else{
		printf("Is Odd Number");
	}
	
}
int main()
{
	checkEvenOdd(5);
	return 0;
}

//write a fun to write a factorial writen with argument.
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

// write a fun to print table of number no return with arg.
#include<stdio.h>

void printTable(int num) {
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
int main() {
    printTable(5);   
    return 0;
}

 //write a fun to reverse a number return with argument
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
               
    


