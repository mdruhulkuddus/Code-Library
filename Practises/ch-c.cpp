#include<bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> s;
        int ans = 0, cur = 0;
        for(int i = 0; i <= n; i++) {
            if(s[i] == '0') {
                cur++;
                ans = max(ans, cur);
            }
            else cur = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
