//#include<stdio.h>
//int main()
//{
//	int a=1, b=20,count,i;
//	printf("prime nuber are : ");
//	
//	for(i=0; i<=20;i++){
//		count=1;
//		if(i<=1){
//			count=0;
//		}
//		else{
//			 for(b = 2; b < i; b++) {
//                if(i % b == 0) {
//                    count = 0; 
//                    break;
//                }
//			}
//	}if(count==1){
//	   	printf("%d\n",i);
//	}
//	
//}
//	return 0;
//}

#include<stdio.h>
int main(){
	int i,j,count;
	printf("prime number between %d and %d are:\n",i,j)
	
	for(i=1;i<=20;i++){
		count=0;
	}
	for(j=1;j<=i;j++){
		if(i%j==0){
			count++;
		}
	}
}

