#include <iostream>
#include <algorithm>
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
        int i = 0, j = 0, k = 0;
        bool found = false;
        while (i < n) {
            if (a[i] % 2 == 0) {
                i++;
                continue;
            }
            j = i + 1;
            k = n - 1;
            while (j < k) {
                int sum = a[i] + a[j] + a[k];
                if (sum % 2 == 1) {
                    found = true;
                    break;
                }
                if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
            if (found) {
                break;
            }
            i++;
        }

        if (found) {
            cout << "YES" << endl;
            cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

