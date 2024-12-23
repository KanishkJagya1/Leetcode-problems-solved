#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the minimum moves to make the array non-decreasing
long long minMovesToMakeIncreasing(const vector<int>& arr) {
    long long moves = 0; // Use long long to prevent overflow
    int prev = arr[0];   // Track the previous element in the array

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < prev) {
            // Add the difference to moves
            moves += prev - arr[i];
        } else {
            // Update prev only if current element is greater or equal
            prev = arr[i];
        }
    }
    return moves;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // Read the size of the array

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read array elements
    }

    cout << minMovesToMakeIncreasing(arr) << endl; // Output the result
    return 0;
}
