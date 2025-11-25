#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int numbers[] = {23, 45, 12, 78, 34};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int maxNumber = findMax(numbers, size);
    cout << "The maximum number is: " << maxNumber << endl;
    return 0;
}