#include <stdio.h>
int main(){
	int n,i,sum=0,sign=0;
	//printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    if(n%2==0){
	        sum=sum-i;
	    }
	    else
	    {
	      sum=sum+i;  
	    }
	    sum=sum*-1;
	}
	printf("the sum of series =%d",sum);
	return 0;
}
