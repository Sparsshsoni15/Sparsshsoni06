#include <iostream>
using namespace std;
void area(){
    float r,ar;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    ar=3.14*r*r;
    cout<<ar<<endl;
}
void circ(){
    float r,cir;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    cir=2*3.14*r;
    cout<<cir<<endl;
}
int main(){
    circ();
    circ();
    area();
    area();
}