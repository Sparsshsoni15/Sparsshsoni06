#include <iostream>
using namespace std;
void add(){
    int a,b,c;
    cout<<"Enter two numbers to be added: "<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl<<endl;
}
void sub(){
    int a,b,c;
    cout<<"Enter two numbers to be subtracted: "<<endl;
    cin>>a>>b;
    c=a-b;
    cout<<c<<endl<<endl;
}
void mult(){
    int a,b,c;
    cout<<"Enter two numbers to be multiplied: "<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<c<<endl<<endl;
}
void divide(){
    float a,b,c;
    cout<<"Enter two numbers to be divided: "<<endl;
    cin>>a>>b;
    c=a/b;
    cout<<c<<endl<<endl;
}
int main(){
    add();
    sub();
    mult();
    divide();
}