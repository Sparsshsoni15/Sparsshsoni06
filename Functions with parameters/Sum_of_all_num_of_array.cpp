#include <iostream>
using namespace std;
int add(int a[],int x){
    int sum=0;
    for(int i=0;i<x;i++){
        sum=sum+a[i];
    }
    return (sum);

}
int main(){
    int x;
    cout<<"Enter size of the array: "<<endl;
    cin>>x;
    int a[x];
    int i;
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<x;i++){
        cin>>a[i];
    }
    int d;
    d=add(a,x);
    cout<<"Sum is: "<<d<<endl;
}