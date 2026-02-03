#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[10];
    cout << "Enter a string: ";
    cin.getline(str, 10);
    cout << "Length of the string is: "<<strlen(str);
    return 0;
}
