#include <iostream>
using namespace std;
int main()
{

    // To print a rectangle pattern of stars based on user-defined rows and columns

    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
