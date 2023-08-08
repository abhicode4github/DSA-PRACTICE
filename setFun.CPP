#include<iostream>
using namespace std;

int Set(int arr[], int length, int index, int x) {
    if (index >= 0 && index < length) {
        arr[index] = x;
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int arr[length];  // Declare an array with user-provided length
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    
    int userIndex;
    cout << "Enter an index: ";
    cin >> userIndex;
    
    int newValue;
    cout << "Enter value to set: ";
    cin >> newValue;
    
    int result = Set(arr, length, userIndex, newValue);

    if (result == 1)
        cout << "New element for input index is set. "<< endl;
    else
        cout << "Index input is incorrect." << endl;

    return 0;
}

/// OUTPUT 

Enter the length of the array : 4 
Enter the elements of the array : 
Element 0 : 2
Element 1 : 3
Element 2 : 5
Element 3 : 7
Enter an index: 2 
Enter value to set : 8 
New element for input index is set.
