#include <iostream>
using namespace std;
int main() {
     // Fibonacci Series: A series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    int a = 0, b = 1;
    
    while (a <= limit) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
