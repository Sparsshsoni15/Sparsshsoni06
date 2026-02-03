#include <iostream>
using namespace std;
void mult(){
    int a,b,c;
    cout<<"Enter two numbers to be multiplied: "<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<c<<endl;
}
void divide(){
    float a,b,c;
    cout<<"Enter two numbers to be divided: "<<endl;
    cin>>a>>b;
    c=a/b;
    cout<<c<<endl;
}
int main(){
    mult();
    divide();
}