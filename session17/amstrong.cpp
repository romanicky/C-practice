#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int num = 153, original = num, sum = 0;
    int digits = 0, temp = num;
    // count number of digit
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    // Calculate sum of powers of digits
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
    {
        cout << original << " is an Amstrong number." << endl;
    }
    else
    {
        cout << original << " is not an Amstrong number." << endl;
    }
    return 0;
}