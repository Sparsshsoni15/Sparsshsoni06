#include<iostream>
using namespace std;
 int table(int n, int i){
    if(i>10)
    return 0;
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    return table(n, i+1);
 }
 int main(){
    int m;
    cout<<"Enter a number: ";
    cin>>m;
    int t=table(m,1);
 }