#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
int main(){
   string s1,s2;
    cout<<"Enter two strings to check if they are Annergan or not: "<<endl;
   getline(cin,s1);
   getline(cin,s2);
   if(s1.length()!=s2.length()){
    cout<<"Strings are not Annergan."<<endl;
   }
   else{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"Strings are Annergan."<<endl;
    }
    else{
        cout<<"Strings are not Annergan."<<endl;
    }
   }
}