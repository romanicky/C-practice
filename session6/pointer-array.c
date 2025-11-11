#include <stdio.h>

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Pointer to the first element of the array

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, *(ptr + i)); // Accessing array elements using pointer arithmetic
    }
    return 0;
}