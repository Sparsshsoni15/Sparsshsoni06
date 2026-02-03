#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=n; i>=0; i--)
    {
        for(int k=n-i; k>0; k--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<(n-i+1);
        }
        cout<<endl;
    }
}
