#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int id;
    float gpa;

public:
    // Constructor
    Student(string n, int i, float g)
    {
        name = n;
        id = i;
        gpa = g;
    }

    // Display method
    void display()
    {
        cout << "Name: " << name << ", ID: " << id << ", GPA: " << gpa << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for student: " << name << endl;
    }
};

int main()
{
    // Create Student objects
    Student s1("Alice", 101, 3.8);
    Student s2("Bob", 102, 3.5);

    // Display student information
    s1.display();
    s2.display();

    return 0;
}