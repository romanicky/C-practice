#include <iostream>
using namespace std;

int main()
{
    float f1 = 3.14f;         // float literal
    double d1 = 2.718;        // double literal
    long double ld1 = 1.414L; // long double literal
    float sci = 1.5e2f;       // sientific notaion (150.0)
    double neg_exp = 2.5E-3;  // scientific notaion (0.0025)
    cout << f1 << " " << d1 << " " << ld1 << endl;
    cout << sci << " " << neg_exp << endl;
    return 0;
}