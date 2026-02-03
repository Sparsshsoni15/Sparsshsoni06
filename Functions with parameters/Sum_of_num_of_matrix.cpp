#include <iostream>
using namespace std;
#include <vector>
int sum(vector<vector<int>>a,int x,int y){
    int sum{0};
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            sum=sum+a[i][j];
        }
    }
    return sum;
}
int main(){
    int y;
    cout<<"Enter the number of columns: "<<endl;
    cin>>y;
    int x;
    cout<<"Enter the number of rows: "<<endl;
    cin>>x;
    cout<<"Enter the elements for the matrix: "<<endl;
    vector<vector<int>> a(x,vector<int>(y));
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl<<endl;
    cout<<sum(a,x,y);
}