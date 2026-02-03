#include <iostream>
using namespace std;
int main(){
    int a,i;
    cout<<"Enter the size of the array:"<<endl;
    cin>>a;
    int arr[a];
    cout<<"Give inputs: "<<endl;
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    for(i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    
}