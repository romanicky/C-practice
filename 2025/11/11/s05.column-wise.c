#include <stdio.h>

int main()
{
    printf("Enter a matrix of 3x3:\n");
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    int sum[3] = {0, 0, 0};

    printf("Column-wise elements are:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            sum[j] += arr[i][j];
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Sum of row %d: %d\n", i + 1, sum[i]);
    }
    return 0;
}
