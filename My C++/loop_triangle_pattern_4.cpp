#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter number of rows: ";
    cin>>x;
    for(x=1; x<=5; x++){
        for(y=1; y<=x-1; y++){
            cout<<" ";
        }
        for(y=1; y<=11-2*x; y++){
            cout<<"*";
        }
        cout << endl;  
    }
}