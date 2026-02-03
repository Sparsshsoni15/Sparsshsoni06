#include<iostream>
using namespace std;
int main(){

    // Find the first number greater than 5 that is divisible by 7, incrementing by 5 each time

    int i=5;
    for(int i=5; ; i+=5){
        if(i%7==0){
            cout<<"The first number greater than 5 that is divisible by 7 is: "<<i<<endl;
            break;
        }
    }
}