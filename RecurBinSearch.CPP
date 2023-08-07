IMPLEMENTING RECURSIVE BINARY SEARCH

#include<iostream>
using namespace std;

int RBinSearch(int arr[], int l, int h,int key)
{
    int mid;

    if(l <= h)
    {
        mid = (l+h)/ 2; 

        if (arr[mid] == key)
            return mid; 

        else if (arr[mid] > key)
            return RBinSearch(arr,l,mid-1,key);
        else
            return RBinSearch(arr,mid+1,h,key);
    }

    return -1; // Element not found
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
   

    int result = RBinSearch(arr,0,length-1,6);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

// OUTPUT 

Element found at index 4
