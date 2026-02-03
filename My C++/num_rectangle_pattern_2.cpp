#include<iostream>
using namespace std;
int main(){
    
    // To print a numeric rectangle pattern of 0s and 1s based on user-defined n and m
    
    int n,m;
    cout<<"Enter number of rows and columns: ";
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int sum=i+j;
            if(sum%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}