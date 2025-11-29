#include <iostream>
using namespace std;

int main()
{
    int numerator = 5, denominator = 0;
    int result;

    try
    {
        if (denominator == 0)
        {
            throw denominator;
        }

        result = numerator / denominator;
    }
    catch (int ex)
    {
        cout << "Exception caught: Division by zero is not allowed." << ex << endl;
    }
    cout << "Division result: " << result << endl;
    return 0;
}