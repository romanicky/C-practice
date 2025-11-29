#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student() : name(""), marks(0) {}

    friend istream &operator>>(istream &in, Student &s);

    friend ostream &operator<<(ostream &out, const Student &s);
};

istream &operator>>(istream &in, Student &s)
{
    cout << "Enter name: ";
    in >> s.name;
    cout << "Enter marks: ";
    in >> s.marks;
    return in;
}

ostream &operator<<(ostream &out, const Student &s)
{
    out << "Name: " << s.name << ", Marks: " << s.marks << endl;
    return out;
}

int main()
{
    Student s;
    cout << "Enter student details (name marks): ";
    cin >> s;
    cout << "Student details: " << s;
    return 0;
}
