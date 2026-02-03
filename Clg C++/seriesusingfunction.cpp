#include <iostream>
using namespace std;

// Function to print the series
void printSeries(int a, int b)
{
    int current = a;
    for (int i = 0; i < b; i++)
    {
        cout << current;
        if (i < b - 1)
            cout << ", ";
        current -= 3; // difference of -3
    }
    cout << endl;
}

int main()
{
    printSeries(47, 5); // start = 47, total 5 terms
    return 0;
}