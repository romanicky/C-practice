#include <iostream>
using namespace std;

class DeepCopy
{
    int *ptr;

public:
    DeepCopy(int val)
    {
        ptr = new int(val);
    };

    DeepCopy(const DeepCopy &obj)
    {
        ptr = new int(*obj.ptr);
    }

    ~DeepCopy()
    {
        delete ptr;
    }
};

int main()
{
    DeepCopy obj(10);
    DeepCopy obj2 = obj;

    return 0;
}