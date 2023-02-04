#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
        // Find the maximum value of the stolen dice
        int max_val = s - r;
        // Initialize an array to store the possible sequence
        int a[n];
        // Fill the array with the remaining values
        for (int i = 0; i < n-1; i++) {
            a[i] = 1;
        }
        // Add the maximum value to the last element of the array
        a[n-1] = max_val;
        // Print the array
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

