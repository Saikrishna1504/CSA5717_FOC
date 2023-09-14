#include <stdio.h>
int main()
{
   int arr[5]={1,2,4,5,6,};
   int i,sum=0;
   for(i=0;i<5;i++){
       sum=sum+arr[i];
   }
       printf("Sum of array elements: %d", sum);
    return 0;
}
