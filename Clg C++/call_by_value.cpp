#include<iostream>
using namespace std;
void swap(int, int); //prototype
main()
{
    int a=10, b=20;
    cout<<a<<" "<<b<<endl;
    swap(a, b); //function calling
    cout<<a<<" "<<b<<endl; //a,b: actual arguement
}
void swap(int x, int y) //x,y: formal arguement
{
    int z;
    z=x;
    x=y;
    y=z;
    cout<<x<<" "<<y<<endl;
}