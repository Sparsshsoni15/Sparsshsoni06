#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    // Initialize top three with minimum values
    int first = -1, second = -1, third = -1;

    for (int i = 0; i < n; i++) {
        if (marks[i] > first) {
            third = second;
            second = first;
            first = marks[i];
        }
        else if (marks[i] > second) {
            third = second;
            second = marks[i];
        }
        else if (marks[i] > third) {
            third = marks[i];
        }
    }

    cout << "\nTop three marks are:\n";
    cout << "1st: " << first << endl;
    cout << "2nd: " << second << endl;
    cout << "3rd: " << third << endl;

    return 0;
}
