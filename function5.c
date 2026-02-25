#include<stdio.h>

void checkBalance(int balance){
	printf("Balance = %d\n",balance);	
}

int withdrow(int balance,int amount){
	return balance - amount;
}

int creadit(int balance,int amount){
	return balance + amount;
}

int main(){
	
	int balance = 10000;
	checkBalance(balance);
	
	balance = withdrow(balance,2000);
	checkBalance(balance);
	
	balance = creadit(balance,50000);
	checkBalance(balance);
	
	return 0;
}

//write a function to find square of number with arg no return.
//write a fun check nuber is even or odd no return with argument.
//write a fun to write a factorial writen with argument.
// write a fun to print table of number no return with arg.
//	.
