#include <iostream>
using namespace std;

int add(int a,int b){
    int z;
    z=a+b;
    return(z);
}
int main(){
    int x,y,c;
    cout<<"Enter two numbers to be summed: "<<endl;
    cin>>x>>y;
    c=add(x,y);
    cout<<"The sum is: "<<c<<endl;
    return 0;
}