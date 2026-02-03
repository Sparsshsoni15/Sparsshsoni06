#include <iostream>
using namespace std;
int main()
{

    // To print numbers from 1 to n

    int n;
    cout << "Enter a number:";
    cin >> n;
    int i = 1;
    while (i <= n)
    { // condition
        cout << i << endl;
        i++; // increment
    }
    return 0;
}