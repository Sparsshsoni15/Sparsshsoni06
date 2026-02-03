#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter the coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0): "<<endl;
    cin >> a >> b >> c;

    float d = b*b - 4*a*c;

    if(d >= 0) {
        float r1 = (-b + sqrt(d))/(2*a);
        float r2 = (-b - sqrt(d))/(2*a);
        cout << r1 << " " << r2;
    } else {
        cout << "No real roots";
    }
    return 0;
}
