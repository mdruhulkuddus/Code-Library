#include <bits/stdc++.h>
using namespace std;

const string pi = "314159265358979323846264338327";

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == pi[i]) {
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}

