#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5] = {{1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {2, 3, 4, 5, 1},
                        {2, 5, 6, 3, 2},
                        {4, 5, 3, 6, 1}};
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += matrix[i][j];
            cout << matrix[i][j] << " + ";
        }
    }

    cout << endl
         << "Sum of 4 row: " << sum << endl;
}