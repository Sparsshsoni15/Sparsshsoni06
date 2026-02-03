#include<iostream>
using namespace std;
int main(){

    // To print a numeric rectangle pattern based on user-defined n
    
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=(i-1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}