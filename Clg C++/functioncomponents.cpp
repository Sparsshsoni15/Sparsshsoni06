#include <iostream>
using namespace std;

// Function to calculate power of a number

int pow1(int, int); // prototype declaration
int main()
{
    int x;
    x = pow1(2, 3); // function call
    cout << x;
}
int pow1(int a, int b)
{ // function definition
    int x, v = 1;
    for (x = 1; x <= b; x++)
    {
        v = v * a;
    }
    return (v);
}