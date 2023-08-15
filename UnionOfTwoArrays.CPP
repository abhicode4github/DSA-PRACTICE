OBJECTIVE -
To perform the Union Operation on the two arrays input by the user.

#include <iostream>
#include <unordered_set>
using namespace std;

void UnionArrays(int A[], int B[], int C[], int m, int n) {
    unordered_set<int> unionSet;

    for (int i = 0; i < m; i++) {
        unionSet.insert(A[i]);
    }

    for (int i = 0; i < n; i++) {
        unionSet.insert(B[i]);
    }

    int index = 0;
    for (const int &num : unionSet) {
        C[index++] = num;
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
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    unordered_set<int> unionSet(A, A + m);
    unionSet.insert(B, B + n);

    int unionSize = unionSet.size();
    int C[unionSize];

    int index = 0;
    for (const int &num : unionSet) {
        C[index++] = num;
    }

    cout << "Union of arrays: ";
    for (int i = 0; i < unionSize; i++) {
        cout << C[i] << " ";
    }

    return 0;
}


////// OUTPUT 

Enter the size of the first array: 4
Enter 4 elements of the first array: 2
3
4
5
Enter the size of the second array: 6 
Enter 6 elements of the second array: 8
7
6
9
5
4
Union of arrays: 9 6 7 8 5 3 2 
