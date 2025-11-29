#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector(10);
    try
    {
        myVector.at(20) = 100;
        throw;
    }
    catch (const out_of_range &oor)
    {
        cout << "Out of range exception caught: " << oor.what() << endl;
    }
    return 0;
}