// ! 6. Write a Program to perform Binary Search for a given set of integer values recursively and nonrecursively.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int binarySearchIterative(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    cout << "Recursive: " << (binarySearch(arr, 0, n - 1, x) != -1 ? "Found" : "Not Found") << endl;
    cout << "Iterative: " << (binarySearchIterative(arr, 0, n - 1, x) != -1 ? "Found" : "Not Found") << endl;
    return 0;
}

//time complexity of this code
// Time Complexity: O(Log n) where n is the number of elements in the array.
// Space Complexity: O(1) as no extra space is used.