#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter the lengths of the three sides of the triangle: "<<endl;   
    cin >> a >> b >> c;

    if(a==b && b==c)
        cout<<"Equilateral";
    else if(a==b || b==c || a==c)
        cout<<"Isosceles";
    else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
        cout<<"Right angled";
    else
        cout<<"Scalene";

    return 0;
}
