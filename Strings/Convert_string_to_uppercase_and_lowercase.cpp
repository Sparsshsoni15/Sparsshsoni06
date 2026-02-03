#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[50];
    cout << "Enter a string: "<<endl;
    cin.getline(str, 50);

    for(int i=0; str[i]!='\0'; i++)
        cout << (char)toupper(str[i]);

    cout << endl;

    for(int i=0; str[i]!='\0'; i++)
        cout << (char)tolower(str[i]);

    return 0;
}
