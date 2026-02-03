#include <iostream>
using namespace std;
int mod(int a, int b){
    int c;
    c=a%b;
    return c;
}
int avg(int a, int b){
    int c;
    c=(a+b)/2;
    return c;
}
int main(){
    int a,b,c,d,sum{0};
    cout<<"Enter two numbers: "<<endl;
    cin>>a;
    cin>>b;
    c=mod(a,b);
    cout<<"The modulus is: "<<c<<endl;
    d=avg(a,b);
    cout<<"The average is: "<<d<<endl;
    sum=c+d;
    cout<<"The sum of the mod and avg is: "<<sum<<endl;
    return 0;
}