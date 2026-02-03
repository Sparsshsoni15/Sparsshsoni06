#include <iostream>
using namespace std;
int main(){
    int i,a;
    int arr[5];
    cout<<"Enter 5 elements of the array:"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int max;
    max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min;
     min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
    }
    cout<<max<<" is the biggest number."<<endl;
    cout<<min<<" is the smallest number."<<endl;
}
}