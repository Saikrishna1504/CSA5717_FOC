#include <stdio.h>

int main() {
    int s1,s2,s3,s4,s5,sum,avg;
    //printf("enter the marks of given subjbects");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    avg=sum/5;
   printf("the average of 5 subjects marks is %d",avg);
}
