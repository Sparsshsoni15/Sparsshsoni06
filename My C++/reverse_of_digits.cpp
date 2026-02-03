#include<iostream>
using namespace std;
int main(){

    // To reverse the digits of a user-defined number
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int reverse=0;
    while(n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<"Reversed number: "<<reverse<<endl;
    return 0;
}