#include <iostream>
using namespace std;
int main()
{

    // To calculate the factorial of a user-defined number

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        cout << "Factorial after multiplying by " << i << " is: " << factorial << endl;
    }
}