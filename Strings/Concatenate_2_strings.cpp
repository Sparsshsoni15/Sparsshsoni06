#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[30], s2[20];
    cout << "Enter two strings: "<<endl;
    cin.getline(s1, 30);
    cin.getline(s2, 20);
    strcat(s1, s2);
    cout << s1;
    return 0;
}
