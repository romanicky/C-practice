#include <iostream>
#include <stdexcept>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;

    try
    {
        file.open("example.txt");

        // Check if file is opened successfuilly
        if (!file.is_open())
        {
            throw runtime_error("File could not be opened!");
        }
        string line;
        cout << "Reading file contents:\n";
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    catch (const runtime_error &e)
    {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}