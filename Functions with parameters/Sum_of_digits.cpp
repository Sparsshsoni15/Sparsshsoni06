#include <iostream>
using namespace std;
int sum_of_digits(int a){
    int sum=0,digit;
    while(a%10!=0){
        digit=a%10;
        sum=sum+digit;
        a=a/10;
    }
    sum=sum+a;
    return(sum);
}
int main(){
    int a;
    cout<<"Enter a number to find the sum of its digits: "<<endl;
    cin>>a;
    int d;
    d=sum_of_digits(a);
    cout<<"Sum of the digits is: "<<d<<endl;
}