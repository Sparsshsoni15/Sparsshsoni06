#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1; i<=n; i++) //outer loop
    {
        for(int j=1; j<=n-i; j++)
        cout<<((" ")); //spaces
        for(int k=1; k<=(2*i)-1; k++)
        {
            if(k==1||k==(2*i)-1||i==n)
            cout<<(("*")); //print stars
            else
            cout<<((" ")); //print spaces
        }
        cout<<endl;
    }
}