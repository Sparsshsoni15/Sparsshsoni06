#include <iostream>
using namespace std;
int main(){
    int i,sum1=0,sum2=0;
    int arr[10];
    cout<<"Give inputs: "<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    cout<<"Sum of the even elements is: "<<sum1<<endl;
    cout<<"Sum of the odd elements is: "<<sum2<<endl;

}