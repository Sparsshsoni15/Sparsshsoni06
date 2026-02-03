#include<iostream>
using namespace std;
int main(){

    // To print a right-angled triangle pattern of stars based on user-defined n

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}