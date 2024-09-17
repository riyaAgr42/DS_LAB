#include<stdio.h>
int main(){
    int arr[10][10],trans[10][10],rows,cols;
    printf("Enter the rows and column of matrix: ");
    scanf("%d%d",&rows,&cols);
    printf("Enter the matrix element:\n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            trans[j][i]=arr[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",trans[i][j]);    
        }
        printf("\n");
    }
}