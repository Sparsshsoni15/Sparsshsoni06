#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
int main(){
    string s1;
    cout<<"Enter a string: "<<endl;
    getline(cin,s1);

    string s2={"hi"};
    
    for(int i=0; i<s1.length(); i++){
    while(s1[i]=='a'){
    s1.replace(i,1,s2);
    i += s2.length() - 1;
    }
    }
    cout<<s1;
}