#include <stdio.h>
int main() {
   int m,n,temp;
   printf("enter m value");
   scanf("%d",&m);
   printf("enter n value");
   scanf("%d",&n);
   printf("before swappinng numbers n=%d,m=%d",m,n);
   temp=m;
   m=n;
   n=temp;
   printf("after swapping the numbers n=%d,m=%d",m,n);
}
