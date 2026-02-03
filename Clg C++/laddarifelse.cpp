#include <iostream>
using namespace std;
int main()
{
    // To check whether a given number is even or odd using if-else ladder

    int a;
    cout << "Enter a number:";
    cin >> a;
    if (a == 1)
    {
        cout << "Monday" << endl;
    }
    else if (a == 2)
    {
        cout << "Tuesday" << endl;
    }
    else if (a == 3)
    {
        cout << "Wednesday" << endl;
    }
    else if (a == 4)
    {
        cout << "Thursday" << endl;
    }
    else if (a == 5)
    {
        cout << "Friday" << endl;
    }
    else if (a == 6)
    {
        cout << "Saturday" << endl;
    }
    else if (a == 7)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}
