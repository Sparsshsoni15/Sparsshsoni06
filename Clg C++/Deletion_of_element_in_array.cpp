#include<iostream>
using namespace std;
int main(){
    int A[10], loc;
    cout<<"Enter 10 elements of the array: ";
    for(int x=0; x<10; x++)
    {
        cin>>A[x];
    }
    cout<<"Enter the location to be deleted: ";
    cin>>loc;
    for(int x=loc-1; x<9; x++)
    {
        A[x]=A[x+1];
    }
    cout<<"The array after deletion is: ";
    for(int x=0; x<9; x++)
    {
        cout<<A[x]<<" ";
    }
}