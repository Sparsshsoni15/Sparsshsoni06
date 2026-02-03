#include<iostream>
using namespace std;
int main(){
    
    //To demonstrate the use of break keyword in a loop

    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i==5){
            break; //loop will terminate when i equals 5
        }
        cout<<i<<endl;
    }
    return 0;
}