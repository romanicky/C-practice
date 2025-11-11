// Program to demostrate Realloc function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i, new_n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory to store n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the number of elements to add: ");
    scanf("%d", &new_n);

    // Resize the allocated memory
    arr = (int *)realloc(arr, (n + new_n) * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter %d more elements:\n", new_n);
    for (i = n; i < n + new_n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements entered after reallocation:\n");
    for (i = 0; i < n + new_n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
    return 0;
}