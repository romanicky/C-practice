#include <iostream>
#include <exception>
using namespace std;

class DivisionByZeroException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Custom Exception: Division by zero is not allowed.";
    }
};

int main()
{
    int numerator = 10;
    int denominator = 0;
    int result;

    try
    {
        if (denominator == 0)
        {
            throw DivisionByZeroException();
        }
        result = numerator / denominator;
        cout << "Division result: " << result << endl;
    }
    catch (const DivisionByZeroException &ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}