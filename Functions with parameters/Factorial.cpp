#include <iostream>
using namespace std;
int fact(int a){
    int i,fact=1;
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    return(fact);
}
int main(){
    int a,d;
    cout<<"Enter a number to find its factorial: "<<endl;
    cin>>a;
    d=fact(a);
    cout<<"The factorial of "<<a<<" is: "<<d<<endl;
}