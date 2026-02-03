#include <iostream>
using namespace std;
int main(){
    int a,i,b,sum1=0,sum2=0,sum=0,j,x,y,z;
    cout<<"Enter the size of the 1st array: "<<endl;
    cin>>a;
    cout<<"Enter the size of the 2nd array: "<<endl;
    cin>>b;
    int arr1[a];
    int arr2[b];
    cout<<"Give inputs for the 1st array: "<<endl;
    
    for(i=0;i<a;i++){
        cin>>arr1[i];
       
        
    }
    cout<<"Give inputs for the 2nd array: "<<endl;
    for(j=0;j<b;j++){
        cin>>arr2[j];
        
    }
    if(a<b){
        for(x=0;x<a;x++){
            sum=arr1[x]+arr2[x];
            cout<<sum<<" ";
            
        }
        
    }
    else{
        for(x=0;x<b;x++){
            sum=arr1[x]+arr2[x];
            cout<<sum<<" ";
            
        }
    }
     if(a>b){
        for(y=b;y<a;y++){
            cout<<arr1[y];
            
        }
    }
    else{
        for(z=a;z<b;z++){
            cout<<arr2[z];
        }
    }
   
    
}