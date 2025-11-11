#include <stdio.h>

void getNumber(int num, float *arr)
{

    // Scan numbers from user
    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
}

float calculateAverage(float *arr, int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    // Enter number of elements
    int n;
    printf("How many elements? ");
    scanf("%d", &n);

    // Loop to get numbers
    float arr[n];
    getNumber(n, arr);
    float result = calculateAverage(arr, n);
    printf("Average: %.2f\n", result);
    return 0;
}