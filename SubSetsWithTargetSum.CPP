#include <iostream>
#include <vector>
using namespace std;

void findSubsetsWithSum(int arr[], int targetSum, vector<int>& current, int index, int currentSum) {
    if (currentSum == targetSum) {
        // Print the current subset
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    if (index == 0 || currentSum > targetSum) {
        return;
    }

    // Exclude the current element
    findSubsetsWithSum(arr, targetSum, current, index - 1, currentSum);

    // Include the current element
    current.push_back(arr[index - 1]);
    findSubsetsWithSum(arr, targetSum, current, index - 1, currentSum + arr[index - 1]);

    // Remove the last element to backtrack
    current.pop_back();
}

void printSubsetsWithSum(int arr[], int size, int targetSum) {
    vector<int> current;
    findSubsetsWithSum(arr, targetSum, current, size, 0);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    cout << "Subsets with sum " << targetSum << ":" << endl;
    printSubsetsWithSum(arr, n, targetSum);

    return 0;
}
