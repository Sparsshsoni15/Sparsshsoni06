#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter year: ";
    cin >> n;
    if ((n % 100 == 0) && (n % 400 == 0))
    {
        cout << "LEAP YEAR";
    }
    else if ((n % 100 != 0) && (n % 4 == 0))
    {
        cout << "LEAP YEAR";
    }
    else
    {
        cout << "NOT A LEAP YEAR";
    }
}