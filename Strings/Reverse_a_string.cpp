#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50];
    cout << "Enter a string: "<<endl;
    cin.getline(str, 50);
    strrev(str);
    cout << "Reversed string: " << str;
    return 0;
}
