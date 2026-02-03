#include<iostream>
using namespace std;
void swap(int*, int*); //protoype
    main()
    {
        int a=10, b=20;
        cout<<a<<" "<<b<<endl;
        swap(&a, &b); //funtion calling
        cout<<a<<" "<<b<<endl; // x,y: actual arguement
    }
    void swap(int*x, int*y) //x,y: formal arguement
    {
        int z;
        z=*x;
        *x=*y;
        *y=z;
        cout<<*x<<" "<<*y<<endl;
    }