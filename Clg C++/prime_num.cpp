#include <iostream>
using namespace std;

int main() {
    int n, flag=0;
    cout<<"Enter a number: "<<endl;
    cin >> n;

    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            flag=1;
            break;
        }
    }

    if(flag==0 && n>1)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}
