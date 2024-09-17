#include<stdio.h>
int main(){
    int mat[10][10],trans[10][10],rows,cols,temp;
    printf("Enter the rows and column of matrix: ");
    scanf("%d%d",&rows,&cols);
    printf("Enter the matrix element:\n");
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==j){
                continue;
            }
            else if(i<j){
                temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
    }
    printf("Transposed matrix:\n");
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");

    }
}
