#include <iostream>
using namespace std;
int main()
{
    // Fibonacci Series: A series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
    int a, b = 0, c = 1, d, n;
    cin >> n;
    for (a = 1; a <= n; a++)
    {
        cout << b << endl;
        d = b + c;
        b = c;
        c = d;
    }
}
