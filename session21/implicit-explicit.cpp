#include <iostream>
using namespace std;

class Distance

{
private:
    int feet;
    int inch;

public:
    // Constructor with implicit conversion
    Distance()
    {
        cout << "Default constructor called." << endl;
    }
    Distance(int p_feet, int p_inch)
    {
        cout << "Parameterized Constructor \n";
        feet = p_feet;
        inch = p_inch;
    }

    void printDistance()
    {
        cout << "Feet: " << feet << ", Inch: " << inch << endl;
    }
};

int main()
{
    Distance d1;
    Distance d2 = Distance();
    Distance *ptr1 = new Distance();

    Distance d4(4, 8);
    Distance d5 = Distance(5, 10);
    Distance *ptr2 = new Distance(6, 11);

    return 0;
}