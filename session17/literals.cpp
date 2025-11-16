#include <iostream>

using namespace std;

int main()
{
    int dec = 100; // Decimal literal
    int oct = 075;
    int hex = 0x1F;
    int bin = 0b1010; // Binary literal (C++14 onwards)

    unsigned int u = 200U;
    long l = 1000000L;
    long long ll = 90000000000LL;
    cout << "Decimal: " << dec << endl;
    cout << "Octal (075): " << oct << endl;
    cout << "Hexadecimal (0x1F): " << hex << endl;
    cout << "Binary (0b1010): " << bin << endl;
    cout << "Unsigned: " << u << endl;
    cout << "Long: " << l << endl;
    cout << "Long Long: " << ll << endl;

    return 0;
}