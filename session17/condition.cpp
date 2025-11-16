#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a digit." << endl;
    }
    else
    {
        cout << ch << " is a special character." << endl;
    }
    return 0;
}