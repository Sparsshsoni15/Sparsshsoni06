#include <iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>n;
    int arr1[n][n];
    int arr2[n][n];
    int arr3[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Matrix 1 is equal to"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr1[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<"And matrix 2 is equal to"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr2[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<"The multiplication of the two matrices is "<<endl;
    

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr3[i][j]=0;
            for(k=0;k<n;k++){
                arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
            }
            cout<<arr3[i][j]<<"   ";
        }
        cout<<endl;
    }
    

}