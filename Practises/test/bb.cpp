#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;

        // calculate the maximum value of the dice
        int max_value = s - r;

        // print the sequence of values
        for (int i = 0; i < n - 1; i++) {
            cout << 1 << " ";
        }
        cout << max_value << endl;
    }
    return 0;
}

