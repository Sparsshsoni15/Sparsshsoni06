#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int p=1; p<=n; p++) //upper half
    {
        for(int i=1; i<=p; i++)
        cout<<(("*")); //left star
        for(int j=1; j<=2*(n-p); j++)
        cout<<" "; //  blank spaces
        for(int k=1; k<=p; k++)
        cout<<(("*")); //right star
        cout<<endl;
    }
    for(int q=n-1; q>=1; q--) //lower half
    {
        for(int i=1; i<=q; i++)
    cout<<(("*")); //left star
        for(int j=1; j<=2*(n-q); j++)
        cout<<" "; // blank spaces
        for(int k=1; k<=q; k++)
        cout<<("*"); //right star
        cout<<endl;
    }
}