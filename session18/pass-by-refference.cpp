#include <iostream>
using namespace std;

void modifyValue(int &num)
{
    num = num + 10;
    cout << "Inside modifyValue function, modified num: " << num << endl;
}

int main()
{
    int number = 20;
    cout << "Before function call: number = " << number << endl;
    modifyValue(number);
    cout << "After function call: number = " << number << endl;
    return 0;
}