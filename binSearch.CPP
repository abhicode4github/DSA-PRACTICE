CPP PROGRAM IMPLEMENTATION FOR BINARY SEARCH

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int length, int key)
{
    int low = 0;
    int high = length - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == key)
            return mid; // Element found, return the index

        if (arr[mid] < key)
            low = mid + 1; // Search the right half
        else
            high = mid - 1; // Search the left half
    }

    return -1; // Element not found
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int result = BinarySearch(arr, length, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

