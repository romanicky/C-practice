#include <iostream>
using namespace std;
struct Date
{
    int d, m, y;
};
struct Student
{
    int roll;
    Date dob;
};

int main()
{
    Student s = {101, {15, 8, 2000}};
    cout << "Roll No: " << s.roll << endl;
    cout << "Date of Birth: " << s.dob.d << "/" << s.dob.m << "/" << s.dob.y << endl;
    return 0;
}