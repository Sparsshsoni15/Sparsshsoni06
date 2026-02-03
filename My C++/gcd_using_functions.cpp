#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0)
    return a;
    return gcd(b, a%b);
}
int main(){
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;
    int t= gcd(x,y);
    cout<<t<<endl;
}