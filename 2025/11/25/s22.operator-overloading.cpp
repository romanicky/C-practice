#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

int main()
{
    Complex c1(3.3, 4.4), c2(1.1, 2.2);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display();
    return 0;
}
