#include <iostream>
#include <cstring>
using namespace std;

union Data
{
    int i;
    float f;
    char c[4];
};

int main()
{
    Data d;
    d.i = 100;
    cout << "Integer: " << d.i << endl;
    d.f = 98.6;
    cout << "Float: " << d.f << endl;
    strcpy(d.c, "ABC");

    // d.c[4] = "ABCD";
    cout << "Char: " << d.c << endl;
    cout << "After assigning char, Integer: " << d.i << ", Float: " << d.f << ", Char: " << d.c << endl;
    return 0;
}