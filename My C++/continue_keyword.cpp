#include<iostream>
using namespace std;
int main(){

    // Print numbers from 1 to 50, skipping multiples of 3
    
    for(int i=1; i<=50;  i++){
        if(i%3==0){
            continue; // Skip multiples of 3
        }
        cout<<i<<" ";
    }
}