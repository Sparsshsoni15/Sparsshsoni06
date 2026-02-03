#include<iostream>
using namespace std;
int main(){

    // To count the number of digits in a user-defined number
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<"Number of digits: "<<digits<<endl;
    return 0;
}