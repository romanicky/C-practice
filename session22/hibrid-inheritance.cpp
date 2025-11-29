#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A method called" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "Class B method called" << endl;
    }
};

class C : public A
{
public:
    void showC()
    {
        cout << "Class C method called" << endl;
    }
};

class D : public B, public C
{
public:
    void showD()
    {
        cout << "Class D method called" << endl;
    }
};

int main()
{
    D objD;
    objD.showB();
    objD.showC();
    objD.showD();
    // objD.showA(); // Ambiguity error

    // Resolving ambiguity using scope resolution
    objD.B::showA();
    objD.C::showA();

    return 0;
}