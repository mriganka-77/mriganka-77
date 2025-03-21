//! 1. Write a program to perform Bubble sort for any given list of numbers.

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

//time and space complexity of this code

// Time Complexity: O(n^2) where n is the number of elements in the array.
// Space Complexity: O(1) as no extra space is used.