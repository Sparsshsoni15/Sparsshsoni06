#include <iostream>
using namespace std;
int main(){
    int i,sum1=0,sum2=0;
    int arr[5];
    cout<<"Give inputs: "<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            sum1=sum1+i;
        }
        else{
            sum2=sum2+i;
        }
    }
    cout<<"Sum of the even element's index  is: "<<sum1<<endl;
    cout<<"Sum of the odd element's index  is: "<<sum2<<endl;
}