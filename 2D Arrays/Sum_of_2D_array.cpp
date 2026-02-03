#include <iostream>
using namespace std;
int main(){
    
    int arr1[3][4];
    int i,j;
    cout<<"Enter the elements for the first matrix: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cin>>arr1[i][j];
        }
    }

    int arr2[3][4];
    int a,b;
    cout<<"Enter the elements for the second matrix: "<<endl;
    for(a=0;a<3;a++){
        for(b=0;b<4;b++){
            cin>>arr2[a][b];
        }
    }

    int x,y;
    cout<<"The addition of the arrays is: "<<endl;
    for(x=0;x<3;x++){
        for(y=0;y<4;y++){
            cout<<arr1[x][y]+arr2[x][y]<<"    ";
        }
        cout<<endl;
    }
}