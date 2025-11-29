#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Base Destructor called" << endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Derived Destructor called" << endl;
    }
};

int main()
{
    Base *obj = new Derived();
    delete obj; // Both Derived and Base destructors will be called
    return 0;
}
