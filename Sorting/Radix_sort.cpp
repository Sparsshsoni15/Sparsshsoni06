#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int A[n], B[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<x+1<<": ";
        cin>>A[x];
    }
    int max=A[0];
    for(int x=1; x<n; x++)
    {
        if(A[x]>max)
        {
            max=A[x];
        }
    }
    for(int p=1; max/p>0; p=p*10)
    {
        int count[10]={0};
        for(int x=0; x<n; x++)
        {
            count[(A[x]/p)%10]++;
        }
        for(int x=1; x<10; x++)
        {
            count[x]=count[x]+count[x-1];
        }
        for(int x=n-1; x>=0; x--)
        {
            B[--count[(A[x]/p)%10]]=A[x];
        }
        for(int x=0; x<n; x++)
        {
            A[x]=B[x];
        }
    }
    for(int x=0; x<n; x++)
    {
        cout<<A[x]<<" ";
    }
}