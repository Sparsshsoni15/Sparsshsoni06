#include <iostream>
using namespace std;
int main()
{
    // To show table
    int x, N;
    cout << "Enter a number:";
    cin >> N;
    for (x = 1; x <= 10; x++)
    {
        cout << N << "x" << x << "=" << N * x;
        cout << endl;
    }
}