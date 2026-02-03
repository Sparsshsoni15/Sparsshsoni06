#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr1[a];
    int i,min,loc=0;
     cout<<"Enter the elements of the array."<<endl;
    for(i=0;i<a;i++){
        cin>>arr1[i];
    }
    min=arr1[0];
    for(i=0;i<a;i++){
        if(arr1[i]<min){
            min=arr1[i];
            loc=i;
        }
    
    }
    cout<<min<<" is the smallest number of the array."<<endl;
    cout<<min<<" is at the location "<<loc+1<<endl;

}