#include<stdio.h>
int main()
{
	int arr[5];
	int i;

	for(i=0; i<=5; i++){
		printf("Enter Array element : ");
		scanf("%d",&arr[i]);
	}

	printf("Print array element\n: ");
	for(i=0; i<=5; i++)
	{
		printf("%d\n",arr[i]);
	}


	return 0;
}