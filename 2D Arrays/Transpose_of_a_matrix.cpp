#include <iostream>
using namespace std;
int main(){
    int i,j;
    int arr[2][2];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl;
    cout<<"Original matrix: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix after transpose: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}