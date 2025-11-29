#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "#Enter 1 to throw int, 2 to throw doubles, 3 to throw string:";
    cin >> choice;
    try
    {
        if (choice == 1)
        {
            throw 100;
        }
        else if (choice == 2)
        {
            throw 3.14;
        }
        else if (choice == 3)
        {
            throw string("Error");
        }
        else
        {
            cout << "No exception thrown." << endl;
        }
    }
    catch (int e)
    {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (double e)
    {
        cout << "Caught a double exception: " << e << endl;
    }
    catch (string e)
    {
        cout << "Caught a string exception: " << e << endl;
    }

    return 0;
}