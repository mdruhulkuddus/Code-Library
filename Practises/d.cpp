#include "bits/stdc++.h"
using namespace std;
const int MAXN = 200005;
int cnt[MAXN];
int distintNum(string str)
{
    memset(cnt, 0, sizeof(cnt));
    int l = str.length();
    int ans = 0;
    for(int i = 0; i < l; i++) {
        if(cnt[str[i]] == 0) {
            ans++;
        }
        cnt[str[i]]++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r; string s;
        cin >> n >> s;
        int len = s.length();
        string part1 = s.substr(0, len/2);
        string part2 = s.substr(len/2, len - len/2);
        int a = distintNum(part1);
        int b = distintNum(part2);
        cout <<  a+b << endl;
    }

    return 0;
}
