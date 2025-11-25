#include <iostream>
using namespace std;

class ShallowCopy
{
private:
    int *ptr;

public:
    ShallowCopy(int value)
    {
        ptr = new int(value);
    }
    ~ShallowCopy()
    {
        delete ptr;
    }
};

int main()
{
    ShallowCopy obj1(42);
    ShallowCopy obj2 = obj1; // This will cause issues due to shallow copy

    return 0;
}