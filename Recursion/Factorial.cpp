#include <iostream>
using namespace std;
int fact(int);
int main(){
    int n,x;
    cout<<"Enter a number to find its factorial: "<<endl;
    cin>>n;
    x=fact(n);
    cout<<"The factorial of "<<n<<" is: "<<x<<endl;

}
int fact(int n){
    if(n==1)
    return 1;
    else
    return(n*fact(n-1));
}