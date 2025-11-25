#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    cout << "Size of arr[0]: " << sizeof(arr[0]) << endl;
    cout << "Size of arr: " << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of an array: " << n << endl;
}