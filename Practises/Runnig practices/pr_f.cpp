#include <bits/stdc++.h>
 2 #define ll long long
 3 using namespace std;
 4 const int N = 4e5+10;
 5 int a[N], b[N], c[N], d[N];
 6 bool cmp(int x, int y) {
 7     return x > y;
 8 }
 9 int main() {
10     int n, x;
11     cin >> n;
12     string s;
13     for(int i = 1; i <= n; i ++) {
14         cin >> s >> x;
15         if(s == "11")  a[++a[0]] = x;
16         else if(s == "10") b[++b[0]] = x;
17         else if(s == "01") c[++c[0]] = x;
18         else d[++d[0]] = x;
19     }
20     sort(a+1,a+1+a[0],cmp);
21     sort(b+1,b+1+b[0],cmp);
22     sort(c+1,c+1+c[0],cmp);
23     ll ans = 0;
24     for(int i = 1; i <= a[0]; i ++) ans += 1LL*a[i];
25     for(int i = 1; i <= min(b[0],c[0]); i ++) ans += 1LL*(b[i]+c[i]);
26     for(int i = min(b[0],c[0])+1; i <= max(b[0],c[0]); i ++) d[++d[0]] = max(b[i],c[i]);
27     sort(d+1,d+1+d[0],cmp);
28     for(int i = 1; i <= min(a[0],d[0]); i ++) ans += 1LL*d[i];
29     printf("%lld\n",ans);
30     return 0;
31 }
