#include <iostream>
using namespace std;
int main()
{

    // Simple calculator using switch case to perform basic arithmetic operations

    int n1, n2;
    cout << "Enter 2 integers:";
    cin >> n1 >> n2;
    cout << "Enter an operator(+,-,*,/,%):";
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Sum is:" << n1 + n2 << endl;
        break;
    case '-':
        cout << "Difference is:" << n1 - n2 << endl;
        break;
    case '*':
        cout << "Product is:" << n1 * n2 << endl;
        break;
    case '/':
        cout << "Division is:" << n1 / n2 << endl;
        break;
    case '%':
        cout << "Remainder is:" << n1 % n2 << endl;
        break;
    default:
        cout << "Enter a valid operation" << endl;
        break;
        return 0;
    }
}