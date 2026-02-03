#include<iostream>
using namespace std;

// Function overloading to add two or three integers or two floats

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    int a=5, b=10, c=15;
    float x=5.5, y=10.5;

    int result1=add(a,b);
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<result1<<endl;

    int result2=add(a,b,c);
    cout<<"Sum of "<<a<<", "<<b<<" and "<<c<<" is: "<<result2<<endl;

    float result3=add(x,y);
    cout<<"Sum of "<<x<<" and "<<y<<" is: "<<result3<<endl;

    return 0;
}