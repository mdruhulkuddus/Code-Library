#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        int i1, i2, i3;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if ((a[i] + a[j] + a[k]) % 2 == 1) {
                        found = true;
                        i1 = i;
                        i2 = j;
                        i3 = k;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }

        if (found) {
            cout << "YES" << endl;
            cout << i1 + 1 << " " << i2 + 1 << " " << i3 + 1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

