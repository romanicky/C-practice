#include <iostream>
using namespace std;

class Teacher
{
public:
    void teach()
    {
        cout << "Teaches students" << endl;
    }
};

class Researcher
{
public:
    void research()
    {
        cout << "Conducts research" << endl;
    }
};

class Professor : public Teacher, public Researcher
{
public:
    void guide()
    {
        cout << "Guides students in projects" << endl;
    }
};

int main()
{
    Professor prof;
    prof.teach();
    prof.research();
    prof.guide();
    return 0;
}
