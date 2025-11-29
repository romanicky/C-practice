// print sum of diagonal elements of a 3x3 matrix
#include <stdio.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
                printf("Adding arr[%d][%d] = %d to sum\n", i, j, arr[i][j]);
            }
        }
    }

    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
