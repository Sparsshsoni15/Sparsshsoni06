#include <iostream>
using namespace std;
int main(){   
    int a[2][2];
    int sum{0},sum_even{0},sum_odd{0};
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The elements of the matrix are: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j]<<" ";
            sum=sum+a[i][j];
        }
        cout<<endl;
    }
    cout<<"The sum of all the elements is: "<<sum<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(a[i][j]%2==0){
                sum_even=sum_even+a[i][j];
            }
            else{
                sum_odd=sum_odd+a[i][j];
            }
        }
    }
    cout<<"Sum of the even elements is: "<<sum_even<<endl;
    cout<<"And the sum of the odd elements is: "<<sum_odd<<endl;
    int min_num;
    min_num=a[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(min_num>a[i][j]){
                min_num=a[i][j];
            }
        }
    }
    cout<<"The smallest number of the matrix is: "<<min_num<<endl;
    int b[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b[i][j]=a[j][i];
        }
    }
    cout<<"The elements of the transpose matrix are as follows: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }

    int search;
    int c{0};
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>search;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(search==a[i][j]){
                c++;
            }
        }
    }
    if(c>0){
        cout<<"The element "<<search<<" is present in the matrix "<<c<<" times"<<endl;
    }
    else{
        cout<<"The element is not in the matrix."<<endl;
    }

    
}
/*All of array programs I had in one file*/