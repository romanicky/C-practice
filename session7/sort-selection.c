#include <stdio.h>

void printArr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_idx])
            {
                min_idx = i;
            }
        }
        // swap
        int tmp = array[step];
        array[step] = array[min_idx];
        array[min_idx] = tmp;
    }
}

int main()
{
    int arr[5] = {4, 2, 3, 9, 2};
    int size = 5;
    printArr(arr, size);
    selectionSort(arr, size);
    printArr(arr, size);

    return 0;
}