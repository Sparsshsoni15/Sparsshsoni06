#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, digit, original, c = 0;
    cin >> n;
    original = n;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        c = c + 1;
    }
    n = original;
    digit = 0;

    while (n > 0)
    {
        digit = n % 10;
        x = x + pow(digit, c);
        n = n / 10;
    }
    if (x == original)
    {
        cout << "The number is Armstrong.";
    }
    else
    {
        cout << "The number is not Armstrong";
    }
}
