#include <iostream>
using namespace std;

int main() {
    int height = 4;   // height of the prongs

    // Upper three prongs
    for (int i = 1; i <= height; i++) {
        cout << "*   *   *" << endl;
    }

    // Horizontal base
    for (int i = 1; i <= 9; i++)
        cout << "*";
    cout << endl;

    // Handle of the trishul
    for (int i = 1; i <= height; i++) {
        cout << "    *" << endl;
    }

    return 0;
}
