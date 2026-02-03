#include <iostream>
using namespace std;
int biggest(int a[],int x){
    int i;
    int max;
    max=a[0];
    for(i=0;i<x;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return(max);
}
int main(){
    int x;
    cout<<"Enter size of the array: "<<endl;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int d;
    d=biggest(a,x);
    cout<<"The biggest number of the array is: "<<d;
}