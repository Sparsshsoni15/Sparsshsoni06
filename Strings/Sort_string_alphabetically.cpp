#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[5][20], temp[20];
    for(int i=0;i<5;i++) {
        cout << "Enter string " << i+1 << ": ";
        cin.getline(str[i], 20);
    }

    for(int i=0;i<5;i++)
        for(int j=i+1;j<5;j++)
            if(strcmp(str[i],str[j])>0) {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }

    for(int i=0;i<5;i++)
        cout<< "Alphabetically sorted string " << i+1 << ": " << str[i] << endl;
    return 0;
}
