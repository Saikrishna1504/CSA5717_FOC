#include <stdio.h>
int main()
{
    int i,j;
    int matrix[2][3]={{1,2,3},{2,3,5}};
    //printf("the matrix is");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
