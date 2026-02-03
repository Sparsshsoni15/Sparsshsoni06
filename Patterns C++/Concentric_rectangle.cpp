#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter the number of rows:";
    cin >> n;
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i, left = j, right = size - 1 - j, bottom = size - 1 - i;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}