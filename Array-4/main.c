#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

//Symmetric Matrix

int main()
{
    int matrix[SIZE][SIZE], result[SIZE][SIZE], i, j, rows, cols, count = 1;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    printf("Enter number of columns:");
    scanf("%d", &cols);

    printf("Enter values in Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Values in Matrix are:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }

    printf("Values in Transpose Matrix are:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] != result[i][j])
            {
                count++; // 2
                break;
            }
        }
    }

    if(count == 1)
    {
        printf("Symmetric Matrix");
    }
    else {
        printf("Not Symmetric Matrix");
    }

    return 0;
}
