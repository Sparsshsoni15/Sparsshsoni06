#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows of the first array: "<<endl;
    cin>>n;
    cout<<"Enter the number of columns of the first array (and rows of second array): "<<endl;
    cin>>m;
    int a[n][m];
    int b[m][n];
    int product[n][n];
    cout<<"Enter the elements of the first array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    // Initializing product array to 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            product[i][j]=0;
        }
    }
    // Multiplying arrays
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                product[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"The product of the two arrays is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
}