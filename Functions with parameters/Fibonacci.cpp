#include <iostream>
using namespace std;
#include <vector>
vector<int> fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    vector<int> fibo;
    for (i = 0; i < n; ++i)
    {
        fibo.push_back(a);
        c = a + b;
        a = b;
        b = c;
    }
    return (fibo);
}
int main()
{
    int x;
    cout << "Enter the size of the series: " << endl;
    cin >> x;
    vector<int> d;
    d = fibonacci(x);
    for (int i = 0; i < x; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}