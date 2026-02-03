#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows in the matrix: "<<endl;
    cin>>a;
    cout<<"Enter the number of columns in the matrix: "<<endl;
    cin>>b;
    
    int arr[a][b];
    
    int i,j;
    cout<<"Enter the elements for the matrix: "<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<arr[i][j]<<"     ";
        }
        cout<<endl;
    }
}