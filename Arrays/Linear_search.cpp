#include <iostream>
#include <string>
using namespace std;
int main(){
    int c{0};
    int loc{0};
    int a;
    cout<<"Enter the size of the array: "<<endl;
    cin>>a;
    int arr[a],confirm,i;
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to confirm in the array: "<<endl;
    cin>>confirm;
    for(i=0;i<a;i++){
        if(arr[i]==confirm){
            loc=i;
            cout<<"the element is in the array at location: "<<loc+1<<endl;
            c++;
        }
    }
    if(c==0){
        cout<<"Item not found."<<endl;
    }
    return 0;

}