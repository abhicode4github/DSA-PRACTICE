#include <iostream>
using namespace std;

void MergeArrays(int A[], int B[], int C[], int m, int n) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    for (; i < m; i++) {
        C[k++] = A[i];
    }
    for (; j < n; j++) {
        C[k++] = B[j];
    }
}

int main() {
    int m;
    cout << "Enter the size of the first array: ";
    cin >> m;

    int A[m];
    cout << "Enter " << m << " elements of the first array: ";
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    int n;
    cout << "Enter the size of the second array: ";
    cin >> n;

    int B[n];
    cout << "Enter " << n << " elements of the second array: ";
    for (int j = 0; j < n; j++) {
        cin >> B[j];
    }

    int C[m + n]; 
    MergeArrays(A, B, C, m, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << C[i] << " ";
    }

    return 0;
}

////// OUTPUT 

Enter the size of the first array : 5
Enter 5 elements of the first array : 1
3
5
7
9
Enter the size of the second array : 3
Enter 3 elements of the second array : 2
4
6
Merged Array : 1 2 3 4 5 6 7 9 
