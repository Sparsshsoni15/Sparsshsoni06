#include <iostream>
using namespace std;
int main()
{
    // Palindrome Number: A number that remains the same when its digits are reversed.
    int n, m, reversedNumber = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    m = n; // Store the original number to compare later
    while (n != 0)
    {
        remainder = n % 10;                               // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        n /= 10;                                          // Remove the last digit from n
    }
    if (m == reversedNumber)
        cout << m << " is a palindrome." << endl;
    else
        cout << m << " is not a palindrome." << endl;
}