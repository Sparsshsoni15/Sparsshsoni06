#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0;
    cout << "Enter a number:";
    cin >> n;
    // To get the reverse of digits as a number
    while (n > 0)
    {
        r = n % 10;
        cout << r;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << endl
         << rev;
}