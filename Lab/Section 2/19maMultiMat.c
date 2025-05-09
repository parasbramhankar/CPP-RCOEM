#include <stdio.h>
#include <stdlib.h>

int main()
{

    int row1, cols1, **matrix1;
    int row2, cols2, **matrix2;
    int **result;

    printf("Enter Rows of first matrix  : ");
    scanf("%d", &row1);
    printf("Enter Columns  of first matrix : ");
    scanf("%d", &cols1);

    printf("Enter Rows of 2nd matrix : ");
    scanf("%d", &row2);
    printf("Enter Columns  of 2nd matrix : ");
    scanf("%d", &cols2);

    if (cols1 != row2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    // memory allocations for row pointer
    matrix1 = (int **)malloc(row1 * sizeof(int *));
    matrix2 = (int **)malloc(row2 * sizeof(int *));
    result = (int **)malloc(row1 * sizeof(int *));

    // Memory allocation for column
    for (int i = 0; i < row1; i++)
    {
        matrix1[i] = (int *)malloc(cols1 * sizeof(int));
        result[i] = (int *)malloc(cols2 * sizeof(int));
    }

    for (int i = 0; i < row2; i++)
    {
        matrix2[i] = (int *)malloc(cols2 * sizeof(int));
    }

    printf("Enter elements of First matrix: ");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", (*(matrix1 + i) + j));
        }
    }

    printf("Enter elements of Second matrix: ");

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", (*(matrix2 + i) + j));
        }
    }
    // print matrix
    printf("First matrix:\n ");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            printf("%d ", *(*(matrix1 + i) + j));
        }
        printf("\n ");
    }
    
    printf("Second matrix:\n ");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", *(*(matrix2 + i) + j));
        }
        printf("\n ");
    }
    printf("\n");



    // multiplication  of matrix

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            int sum = 0;
            for (int k = 0; k < cols1; k++)
            {
                sum += (*(*(matrix1 + i) + k)) *  (*(*(matrix2 + k) + j));
            }
            result[i][j] = sum;
        }
    }



    printf("Result of matrix multiplication:  \n");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    // free memory
    for (int i = 0; i < row1; i++)
    {
        free(matrix1[i]);
        free(result[i]);
    }
    free(matrix1);

    free(result);

    return 0;
}