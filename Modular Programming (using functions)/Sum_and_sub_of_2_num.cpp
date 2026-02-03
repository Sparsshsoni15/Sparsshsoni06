#include <iostream>
using namespace std;
void add(){
    int a,b,c;
    cout<<"Enter two numbers to be added: "<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<c;
    cout<<endl;
}
void sub(){
    int a,b,c;
    cout<<"Enter two numbers to be subtracted: "<<endl;
    cin>>a>>b;
    c=a-b;
    cout<<c;
    cout<<endl;
}
int main(){
    add();
    add();
    sub();
}