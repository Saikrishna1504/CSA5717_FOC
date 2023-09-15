#include <stdio.h>
int main(){
    int arr[100];
    int n,i;
    printf("enter the no.of elemets");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    printf("enter the value",i+1);
    scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
}
     printf("Largest element = %d", arr[0]);
  return 0;
}
