#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50], sub[20];
    cout << "Enter the main string and the substring: "<<endl;
    cin.getline(str, 50);
    cin.getline(sub, 20);

    if(strstr(str, sub))
        cout << "Substring found";
    else
        cout << "Substring not found";
    return 0;
}
