#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50], rev[50];
    cout << "Enter a string: "<<endl;
    cin.getline(str, 50);

    strcpy(rev, str);
    strrev(rev);

    if(strcmp(str, rev) == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
