#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    // loop to extract digits and add them
    while (num > 0)
    {
        digit = num % 10; // get last digit
        sum += digit;     // add digit to sum
        num = num / 10;   // remove last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}