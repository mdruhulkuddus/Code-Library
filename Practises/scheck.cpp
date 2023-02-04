#include<bits/stdc++.h>
using namespace std;
const int MAXN = 200005;
int cnt[MAXN];

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(cnt[s[i]] == 0) {
            ans++;
        }
        cnt[s[i]]++;
    }
    cout << ans << endl;
    return 0;
}

