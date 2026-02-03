#include <iostream>
using namespace std;
float area(float r){
    float ar;
    ar=3.14*r*r;
    return(ar);
}
float circ(float r){
    float cir;
    cir=2*3.14*r;
    return(cir);
}
int main(){
    float r,d;
    cout<<"Enter the radius of the circle: "<<endl; 
    cin>>r;
    d=area(r);
    cout<<"The area is: "<<d<<endl;
    d=circ(r);
    cout<<"The circumference is: "<<d<<endl;
}