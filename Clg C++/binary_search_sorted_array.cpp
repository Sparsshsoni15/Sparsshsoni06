#include <iostream>
using namespace std;
int main()
{
    int A[10], x, l, h, m;
    for (int y = 0; y < 10; y++)
    {
        cin >> A[y];
    }
    cin >> x;
    l = 0;
    h = 9;
    m = (l + h) / 2;
    while (A[m] != x && l < h)
    {
        if (x > A[m])
            l = m + 1;
        else
            h = m - 1;
        m = (l + h) / 2;
    }
    if (A[m] == x)
    {
        cout << "Element found at index: " << m + 1;
    }
    else
    {
        cout << "Element not found";
    }
}