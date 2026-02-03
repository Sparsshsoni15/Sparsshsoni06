#include <iostream>
using namespace std;

int main() {
    int size, N;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements in increasing order:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to find: ";
    cin >> N;

    int low = 0, high = size - 1;
    int position = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == N) {
            position = mid;   // store position
            break;
        }
        else if (arr[mid] < N) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (position != -1)
        cout << "Number found at index: " << position << endl;
    else
        cout << "Number not found in the array." << endl;

    return 0;
}
