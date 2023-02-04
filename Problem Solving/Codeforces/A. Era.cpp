#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, k, ans = 0;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> k;
            ans = max(ans, k - i);
        }
        cout << ans << endl;
    }
    return 0;
}
