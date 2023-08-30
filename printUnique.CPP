#include <iostream>
using namespace std;

bool isDuplicate(int arr[], int n, int index) {
    for (int i = 0; i < n; ++i) {
        if (i != index && arr[i] == arr[index]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Unique elements in the array: ";
    for (int i = 0; i < n; ++i) {
        if (!isDuplicate(arr, n, i)) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
