#include<iostream>
using namespace std;
int main(){
    
    int n, m;
    cout<<"Enter 2 integers:";
    cin>>n>>m;
    cout<<"Enter an operator(+, -, *, /):";
    char op;
    cin>>op;

         switch (op)
    {
    case '+':
        cout << "Sum is:" << n + m << endl;
        break;
    case '-':
        cout << "Difference is:" << n - m << endl;
        break;
    case '*':
        cout << "Product is:" << n * m << endl;
        break;
    case '/':
        cout << "Division is:" << n / m << endl;
        break;
    default:
        cout << "Enter a valid operation" << endl;
        break;
        return 0;
    }
}