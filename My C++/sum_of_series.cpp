#include<iostream>
using namespace std;
int main(){

    // To calculate the sum of the series 1 - 2 + 3 - 4 + ... ± n based on user-defined n
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            result=result - i;
        }
        else{
            result=result + i;
        }
        cout<<"Current result after adding/subtracting "<<i<<" is: "<<result<<endl;
    }
}