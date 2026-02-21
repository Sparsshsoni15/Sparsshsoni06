#include<iostream>
using namespace std;
int main(){
    int A[10], loc, val;
    cout<<"Enter 9 elements of the array: ";
    for(int x=0; x<9; x++)
    {
        cin>>A[x];
    }
    cout<<"Enter the location and value to be inserted: ";
    cin>>loc>>val;
    for(int x=8; x>=loc-1; x--)
    {
        A[x+1]=A[x];
    }
    A[loc-1]=val;
    cout<<"The array after insertion is: ";
    for(int x=0; x<10; x++)
    {
        cout<<A[x]<<" ";
    }
}
