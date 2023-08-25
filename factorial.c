#include<stdio.h>
int main(){
    int n,i,fact=1;
    //printf("enter the n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
  printf("%d is the factorial of given number",fact);
  return 0;
}
