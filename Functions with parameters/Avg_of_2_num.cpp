#include <iostream>
using namespace std;
float avg(float a,float b,float c){
    float d;
    d=(a+b+c)/2;
    return d;
}
int main(){
    int a,b,c,d;
    cout<<"Enter three numbers to find their average: "<<endl; 
    cin>>a>>b>>c;
    d=avg(a,b,c);
    cout<<"The average is: "<<d<<endl;
}