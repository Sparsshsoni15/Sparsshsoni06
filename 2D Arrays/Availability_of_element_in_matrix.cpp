#include <iostream>
using namespace std;
int main(){
    int i,j,loc_row,loc_col;
    int arr[2][2];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int confirm;
    cout<<"Enter the number you want to check for: "<<endl;
    cin>>confirm;
    int c{0};
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(confirm==arr[i][j]){
                loc_row=i+1;
                loc_col=j+1;
                cout<<"The number is in the matrix at the location "<<loc_row<<" , "<<loc_col<<endl;
                c=c+1;
            }
            
        }
    }
    if(c==0){
        cout<<"The element is not in the matrix."<<endl;
    }
}