#include <iostream>
using namespace std;
int main()
{

    // 2D Array: An array of arrays, allowing storage of data in a grid or matrix format.

    int A[3][4], x, y;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            cin >> A[x][y];
        }
    }
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 4; y++)
        {
            cout << A[x][y] << " ";
        }
        cout << endl;
    }
}
