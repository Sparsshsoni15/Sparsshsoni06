#include<iostream>
using namespace std;
int main(){

    // 2D Array Sum: Calculating the sum of each row in a 2D array.
    
    int A[3][4], x, y, sum=0;
    for(x=0; x<3; x++)
    {
        for(y=0; y<4; y++)
        {
            cin>>A[x][y];
        }
    }
    for(x=0; x<3; x++)
    {
        for(y=0; y<4; y++)
        {
            sum=sum+A[x][y];
        }
        cout<<sum<<endl;
        sum=0;
    }
}