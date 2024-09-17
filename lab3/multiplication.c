#include <stdio.h>
int main()
{
    int mat1[100][100], mat2[100][100], r1, c1, r2, c2, multi[100][100];
    printf("Enter the size of matrix1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the size of matrix2: ");
    scanf("%d%d", &r2, &c2);
    if (c1 == r2)
    {
        printf("Multiplication possible\n");
        printf("Enter the element of first matrix: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Element[%d][%d]", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter the element of second matrix: \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Element[%d][%d]: ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }
        // main logic
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                multi[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    multi[i][j] = multi[i][j] + mat1[i][k] * mat2[k][j];
                }
            }
        }
        printf("Resultant matrix after multipliction:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", multi[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Multiplication is not possible!!!");
    }
}