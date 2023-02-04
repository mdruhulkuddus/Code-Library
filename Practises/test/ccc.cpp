#include<bits/stdc++.h>
using namespace std;

int t, n, a[105][105], ans[105];
bool vis[105];

int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                cin >> a[i][j];
            }
        }
        memset(vis, 0, sizeof(vis));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                if(!vis[a[i][j]]) {
                    ans[i] = a[i][j];
                    vis[a[i][j]] = 1;
                    break;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
