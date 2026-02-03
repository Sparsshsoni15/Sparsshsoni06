#include <iostream>
using namespace std;

int main() {
    char str[50];
    int pos;
    cout << "Enter a string: "<<endl;
    cin.getline(str, 50);
    cout<<"Enter the position of character to be deleted: ";
    cin >> pos;

    for(int i=pos-1; str[i]!='\0'; i++)
        str[i] = str[i+1];

    cout << "Modified string: " << str;
    return 0;
}
