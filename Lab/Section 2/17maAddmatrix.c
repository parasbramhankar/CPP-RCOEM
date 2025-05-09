#include <stdio.h>
#include <stdlib.h>

int main()
{

    int r,c, **matrix1, **matrix2, **Add;
    printf("Enter Rows of matrix : ");
    scanf("%d", &r);
    printf("Enter Columns  of matrix : ");
    scanf("%d", &c);

    // memory allocations for row pointer
    matrix1 = (int **)malloc(r * sizeof(int *));
    matrix2 = (int **)malloc(r * sizeof(int *));
    Add = (int **)malloc(r * sizeof(int *));
    // Memory allocation for column
    for (int i = 0; i < r; i++)
    {
        matrix1[i] = (int *)malloc(c * sizeof(int));
        matrix2[i] = (int *)malloc(c * sizeof(int));
        Add[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter elements of First matrix: ");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (*(matrix1 + i) + j));
        }
    }

    printf("Enter elements of Second matrix: ");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (*(matrix2 + i) + j));
        }
    }

    // print matrix
    printf("First matrix:\n ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(matrix1 + i) + j));
        }
        printf("\n ");
    }
    
    printf("Second matrix:\n ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(matrix2 + i) + j));
        }
        printf("\n ");
    }
    printf("\n");


    // Addition  of matrix

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Add[i][j]=matrix1[i][j] + matrix2[i][j];
            Add[i][j] = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }

printf("Addition  of matrix:  \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", *(*(Add + i) + j));
        }
        printf("\n");
    }

    // free memory
    for (int i = 0; i < c; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(Add[i]);
    }
    free(matrix1);
    free(matrix2);
    free(Add);

    return 0;
}