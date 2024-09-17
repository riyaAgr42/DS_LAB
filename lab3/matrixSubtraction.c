#include <stdio.h>
int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1,rows2,cols2;
    int i, j;

    printf("Enter number of rows1 and columns1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter number of rows2 and columns2: ");
     scanf("%d %d", &rows2, &cols2);
     if(rows1==rows2 && cols1==cols2){
        printf("addition performed");
     }
     else{
        printf("addition not performed");

     }
    printf("Enter elements for matrix 1:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements for matrix 2:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //main logic
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
