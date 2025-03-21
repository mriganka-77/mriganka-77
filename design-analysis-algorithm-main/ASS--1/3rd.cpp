// ! 4. Write a program to find Maximum and Minimum of the given set of integer values.

#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max, min;
    findMaxMin(arr, n, max, min);

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}

//! time and space complexity of this code

// Time Complexity: O(n) where n is the number of elements in the array.
// Space Complexity: O(1) as no extra space is used.