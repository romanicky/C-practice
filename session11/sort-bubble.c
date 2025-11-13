#include <stdio.h>

void printArr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }

        // if no swap => sort done
        if (swapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {5, 6, 1, 8, 3};
    int size = 5;
    printf("Your array:");
    printArr(arr, size);
    bubbleSort(arr, size);
    printf("Sorted array:");
    printArr(arr, size);
    return 0;
}