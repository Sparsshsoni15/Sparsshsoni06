#include<iostream>
using namespace std;
void hollowDiamond(int n){
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(2*n); j++)
        {
            if(i+j<=n-1) //Upper left triangle
            cout<<"*";
            else
            cout<<" ";
            if((i+n)<=j) //Upper right triangle
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(2*n); j++)
        {
            if(i>=j) //lower left triangle
            cout<<"*";
            else
            cout<<" ";
            if(i>=(2*n-1)-j) //lower right triangle
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    hollowDiamond(n);
    return 0;
}