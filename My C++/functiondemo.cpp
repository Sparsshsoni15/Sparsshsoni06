#include<iostream>
using namespace std;

// Function to add two numbers and return the result

int addition(int x, int y){ //formal parameters
    //processing
    int result = x + y;
    return result;
}
int main(){
    int x = addition(10,5); //actual parameters
    cout<<"The sum is:"<<x<<endl;
    return 0;
}