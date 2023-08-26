#include <stdio.h>
int main() {
   int m,n;
   printf("enter m value");
   scanf("%d",&m);
   printf("enter n value");
   scanf("%d",&n);
   printf("before swappinng numbers n=%d,m=%d\n",m,n);
   m=m+n;
   n=m-n;
   m=m-n;
   printf("after swapping the numbers n=%d,m=%d",m,n);
}
