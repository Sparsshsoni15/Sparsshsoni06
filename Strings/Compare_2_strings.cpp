#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[20], b[20];
    cout << "Enter two strings: "<<endl;
    cin.getline(a, 20);
    cin.getline(b, 20);

    if (strcmp(a, b) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
