#include <iostream>
using namespace std;

int main() {
    char str[50], oldc, newc;
    cout << "Enter a string, character to be replaced and new character: "<<endl;
    cin.getline(str, 50);
    cout<<"Enter the character to be replaced and the new character: ";
    cin >> oldc >> newc;

    for(int i=0; str[i]!='\0'; i++)
        if(str[i] == oldc)
            str[i] = newc;

    cout << "Modified string: " << str;
    return 0;
}
