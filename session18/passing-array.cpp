#include <iostream>
using namespace std;

void updateThirdElement(int arr[], int num)
{
    arr[2] = num;
}

int main()
{
    int arr[5];
    int newNum;
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter new value for the third element: ";
    cin >> newNum;
    updateThirdElement(arr, newNum);
    cout << "Updated array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}