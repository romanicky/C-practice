// Multiply two matrices
#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int result[2][4];

    // Initialize result matrix to zero
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            result[i][j] = 0;

    // Print input matrices
    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Multiply matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
                printf("Multiplying A[%d][%d] (%d) * B[%d][%d] (%d) and adding to result[%d][%d]: %d\n", i, k, a[i][k], k, j, b[k][j], i, j, result[i][j]);
            }
        }
    }

    // Print result matrix
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
