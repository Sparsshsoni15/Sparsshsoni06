#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0)
    return 1;
    return a*power(a, b-1);
}
int main(){
    int a,b;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    int f= power(a,b);
    cout<<f<<endl;
}