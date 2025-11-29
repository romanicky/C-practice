#include <iostream>
using namespace std;

void display(int i)
{
    cout << "Displaying int: " << i << endl;
}

void display(double f)
{
    cout << "Displaying float: " << f << endl;
}

int main()
{
    display(5);   // Calls display(int)
    display(5.5); // Calls display(double)
    return 0;
}
