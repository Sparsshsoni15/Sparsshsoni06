#include <iostream>
using namespace std;

int main() {
    int n = 9;   // must be an odd number for perfect symmetry

    // Upper half of heart
    for (int i = n / 2; i < n; i += 2) {
        // Left spaces
        for (int j = 1; j < n - i; j += 2)
            cout << " ";

        // Left hollow triangle
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        // Middle spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Right hollow triangle
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Lower inverted hollow pyramid
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int j = i; j < n; j++)
            cout << " ";

        // Hollow pyramid
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
