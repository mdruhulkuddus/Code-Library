#include<bits/stdc++.h>
using namespace std;
const int N = 4 * 1e5 + 5;

int tree[N];
int a[N];

void init(int node, int st, int ed)
{
        if(st == ed) {
                tree[node] = a[st];
                return ;
        }
        int mid = (st + ed) >> 1;
        init( node * 2, st, mid );
        init(node * 2 + 1, mid + 1, ed);
        tree[node] = min(tree[node * 2], tree[node * 2 + 1]);
}

int query(int node, int st, int ed, int i, int j)
{
        if(i > ed || j < st) return INT_MAX;
        if(st >= i && ed <= j) return tree[node];
        int mid = (st + ed) >> 1;
        return min( query(node * 2, st, mid, i, j), query(node * 2 + 1, mid + 1, ed, i, j) );
}

int main()
{
        int t;
        scanf("%d", &t);
        for(int tc = 1; tc <= t; tc++) {
                int n, q;
                scanf("%d %d", &n, &q);
                for(int i = 0; i < n; i++)scanf("%d", a + i);
                memset(tree, 0, sizeof tree);
                init(1, 0, n - 1);
                printf("Case %d:\n", tc);
                while(q--) {
                        int x, y;
                        scanf("%d %d", &x, &y);
                        x--, y--;
                        printf("%d\n", query(1, 0, n - 1, x, y));
                }
        }
        return 0;
}
