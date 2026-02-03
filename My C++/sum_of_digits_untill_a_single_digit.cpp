#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 9) {   // repeat until single digit
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;     // update n with the digit sum
    }

    cout << "Single digit sum = " << n;
    return 0;
}
