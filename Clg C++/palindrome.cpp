#include <iostream>
using namespace std;

int main() {
    int n, rev=0, temp;
    cin >> n;
    temp = n;

    while(n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }

    if(temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
