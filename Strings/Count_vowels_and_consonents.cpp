#include <iostream>
using namespace std;

int main() {
    char str[50];
    int v=0, c=0;
    cout << "Enter a string: "<<endl;
    cin.getline(str,50);

    for(int i=0; str[i]!='\0'; i++) {
        char ch = tolower(str[i]);
        if(ch>='a' && ch<='z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }
    cout << "Vowels: " << v << " Consonants: " << c;
    return 0;
}
