#include <iostream>
using namespace std;
float percentage(float a,float b,float c){
    float d;
    d=((a+b+c)*100)/300;
    return(d);
}
int main(){
    float a,b,c,d;
    cout<<"Enter marks of three subjects: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    d=percentage(a,b,c);
    cout<<"The percentage is: "<<d<<endl;
    if(d>=50){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}