#include <iostream>
using namespace std;

class Base
{
public:
    virtual void vfunc()
    {
        cout << "This is base's vfunc()" << endl;
    };
};

class derived1 : public Base
{
public:
    void vfunc()
    {
        cout << "This is derived1's vfunc()" << endl;
    }
};

class derived2 : public Base
{
public:
    void vfunc()
    {
        cout << "This is derived2's vfunc()" << endl;
    }
};

int main()
{
    derived1 d1;
    derived2 d2;

    Base *p;

    p = &d1;
    p->vfunc(); // Calls derived1's vfunc()

    p = &d2;
    p->vfunc(); // Calls derived2's vfunc()

    return 0;
}
