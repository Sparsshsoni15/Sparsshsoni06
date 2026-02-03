#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[50];
    cout << "Enter a string: "<<endl;
    cin.getline(str, 50);

    for(int i=0; i<strlen(str); i++) {
        int count = 1;
        if(str[i] == '0') continue;

        for(int j=i+1; j<strlen(str); j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '0';
            }
        }
        cout <<"Repeated character " << str[i] << " : " << count << endl;
    }
    return 0;
}
