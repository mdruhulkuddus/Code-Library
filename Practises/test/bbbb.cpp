#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, r;
        cin >> n >> s >> r;
        int max_val = s - r;
        s -= max_val;
        double all = s*1.0 / (n-1)*1.0;
        int a[n];
        for (int i = 0; i < n-2; i++) {
            a[i] = round(all);
            s -= round(all);
        }

        a[n-1] = max_val;
        a[n-2] = s;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


