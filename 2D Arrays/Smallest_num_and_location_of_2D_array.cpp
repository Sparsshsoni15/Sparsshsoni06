#include <iostream>
using namespace std;
int main(){
    int i,j,x,y,loc_row,loc_col;
    int arr[2][2];
    cout<<"Enter the elements of the 2D array: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int min;
    min=arr[0][0];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(min>=arr[i][j]){
                min=arr[i][j];
                loc_row=i;
                loc_col=j;
            }
            
        }
    }
    cout<<"The smallest number of the array is: "<<min<<endl;
    cout<<"It is located at "<<loc_row+1<<" row and "<<loc_col+1<<" column."<<endl;
}