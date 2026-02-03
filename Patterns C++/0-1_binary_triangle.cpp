#include<iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            // if the sum of (i+j) is even
            // print 1 else print 0
            cout<<((i+j)%2);
            //cout<<(1-(i+j)%2);
        }
        cout<<endl;
    }
}