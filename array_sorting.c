#include<stdio.h>
int main()
{
  printf("Sort Acending Array\n");
 int arr[5]={20,50,30,10,40};
 int i,j,temp;
 for(i=0;i<5;i++)
 {
   for(j=0;j<5;j++)
   {
       if(arr[j]>arr[j+1])
     {
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
     }
   }
 }
   for(j=0;j<5;j++)
   {
    printf("%d \n",arr[j]);
   }

   printf("Sort Decendingh Array");

   for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
     {
        if(arr[j]<arr[j+1])
        {
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
      }
    }
    for(j=0;j<5;j++)
    {
     printf("%d \n",arr[j]);
    }
    return 0;

}
