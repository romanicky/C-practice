#include <iostream>
using namespace std;

int main()
{
    string s = "Hello world";

    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}