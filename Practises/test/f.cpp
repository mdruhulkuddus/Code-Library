#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 3e5 + 5;

int n, a[MAXN], coprime[MAXN];
long long ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            coprime[j]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        ans += 1ll * (coprime[a[i]] - 1) * (n - i);
    }
    cout << ans << endl;
    return 0;
}

