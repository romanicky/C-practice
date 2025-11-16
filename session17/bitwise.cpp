#include <iostream>
using namespace std;
int main()
{
    int a = 5; // Binary: 0101
    int b = 9; // Binary: 1001
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a & b=" << (a & b) << endl; // 0001 = 1
    // Bitwise OR
    cout << "a | b=" << (a | b) << endl; // 1101 = 13
    // Bitwise XOR
    cout << "a ^ b=" << (a ^ b) << endl; // 1100 = 12
    // Bitwise NOT
    cout << "~a = " << (~a) << endl; // ~0101 = 1010 (in 2's comp]
    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl; // 1010 = 10
    // Right Shift
    cout << "b >> 1 = " << (b >> 1) << endl; // 0100 = 4
    return 0;
}