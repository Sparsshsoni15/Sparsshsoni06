#include <iostream>
using namespace std;
#include <vector>
vector <int> swap(int a,int b){
    return {b,a};
}
int main(){
    int a,b;
    cout<<"Enter two numbers to be swapped: "<<endl;    
    cin>>a>>b;
    vector <int> d;
    d=swap(a,b);
    cout<<"Before swapping "<<a<<" and "<<b<<endl;
    cout<<"After swapping "<<d[0]<<" and "<<d[1]<<endl;
}