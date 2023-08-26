#include <stdio.h>
int main() {
   int a,b,c,temp;
   printf("enter a value");
   scanf("%d",&a);
   printf("enter b value");
   scanf("%d",&b);
   printf("enter c value");
   scanf("%d",&c);
   printf("before swappinng numbers a=%d,b=%d,c=%d\n",a,b,c);
   temp=a;
   a=b;
   b=c;
   c=temp;
   printf("after swapping the numbers a=%d,b=%d,c=%d",a,b,c);
}
