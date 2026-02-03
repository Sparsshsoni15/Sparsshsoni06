#include <iostream>
using namespace std;
int main()
{
    // Armstrong Number: An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
    int n, x = 0, digit, original;
    cin >> n;
    original = n;
    while (n / 10 != 0)
    {
        digit = n % 10;
        x = x + (digit * digit * digit);
        n = n / 10;
    }
    x = x + (n * n * n);
    if (x == original)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }
}
