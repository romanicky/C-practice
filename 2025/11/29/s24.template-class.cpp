#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    void displayResult()
    {
        cout << "Numbers: " << num1 << " and " << num2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: " << divide() << endl;
    }

    T add()
    {
        return num1 + num2;
    }

    T subtract()
    {
        return num1 - num2;
    }

    T multiply()
    {
        return num1 * num2;
    }

    T divide()
    {
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return zero or handle error as needed
        }
    }
};

int main()
{
    Calculator<int> intCalc(10, 5);
    cout << "Integer Calculator Results:" << endl;
    intCalc.displayResult();
    cout << endl;
    Calculator<double> doubleCalc(10.5, 2.5);
    cout << "Double Calculator Results:" << endl;
    doubleCalc.displayResult();
    return 0;
}