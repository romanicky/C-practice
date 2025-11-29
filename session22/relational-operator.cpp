#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    Student(int m) : marks(m) {}

    bool operator>(const Student &s) const
    {
        return marks > s.marks;
    }

    bool operator==(const Student &s) const
    {
        return marks == s.marks;
    }
};

int main()
{
    Student s1(85);
    Student s2(90);
    Student s3(85);

    if (s1 > s2)
    {
        std::cout << "s1 has more marks than s2" << std::endl;
    }
    else
    {
        std::cout << "s1 does not have more marks than s2" << std::endl;
    }

    if (s1 == s3)
    {
        std::cout << "s1 and s3 have equal marks" << std::endl;
    }
    else
    {
        std::cout << "s1 and s3 do not have equal marks" << std::endl;
    }

    return 0;
}