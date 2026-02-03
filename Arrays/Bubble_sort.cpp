#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t{0};
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    cout<<"The final sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}