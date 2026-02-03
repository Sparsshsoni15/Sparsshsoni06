#include <iostream>
using namespace std;
int add(int x,int y,int z){
    int g;
    g=x+y+z;
    return(g);
}
int main(){
    int a,b,c,d;
    cout<<"Enter three numbers to be summed: "<<endl;
    cin>>a>>b>>c;
    d=add(a,b,c);
    cout<<"The sum is: "<<d<<endl;
    return 0;
}