#include <iostream>
using namespace std;
int main(){
    int a,b,sum1{0},sum2{0};
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

            if(arr[i][j]%2==0){
                sum1=sum1+arr[i][j];
            }
            else{
                sum2=sum2+arr[i][j];
            }
        }
    }
    cout<<"Sum of the even elements is: "<<sum1<<endl;
    cout<<"Sum of the odd elements is: "<<sum2<<endl;
    
}