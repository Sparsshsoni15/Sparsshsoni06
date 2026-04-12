#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find maximum element
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    int count[max + 1] = {0};

    // Count frequency
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Reconstruct sorted array
    int index = 0;
    for(int i = 0; i <= max; i++) {
        while(count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}