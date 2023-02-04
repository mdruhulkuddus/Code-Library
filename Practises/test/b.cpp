#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 2e5 + 5;

int t, n, a[MAXN], s[MAXN], ans;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int solve(int l, int r) {
    if (l == r) return a[l];
    int mid = (l + r) >> 1;
    int res = gcd(solve(l, mid), solve(mid + 1, r));
    int L = mid, R = mid + 1, sum = 0;
    for (int i = mid; i >= l; i--) {
        sum += a[i];
        res = max(res, gcd(sum, s[R] - s[mid]));
        L = min(L, i);
    }
    sum = 0;
    for (int i = mid + 1; i <= r; i++) {
        sum += a[i];
        res = max(res, gcd(sum, s[mid] - s[L - 1]));
        R = max(R, i);
    }
    return res;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];

        cout << solve(1, n) << endl;
    }
    return 0;
}

