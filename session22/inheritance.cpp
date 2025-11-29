#include <iostream>
using namespace std;

class base
{
public:
    void display()
    {
        cout << "Class base" << endl;
    }
};

class derived1 : public base
{
public:
    void print()
    {
        cout << "This is the 1st derived class" << endl;
    }
};

class derived2 : public derived1
{
public:
    void view()
    {
        cout << "This is the 2nd derived class" << endl;
    }
};

int main()
{
    derived2 d2;
    d2.display();
    d2.print();
    d2.view();
    return 0;
}