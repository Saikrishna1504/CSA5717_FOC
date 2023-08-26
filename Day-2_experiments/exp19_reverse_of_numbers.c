#include <stdio.h>
int main() {
    int n,i,rev=0;
    printf("enter the give numver");
    scanf("%d",&n);
    while(n!=0) 
{
        i=n%10;
        rev=rev*10+i;
        n=n/10;
}
printf("reverse number= %d",rev);
}
