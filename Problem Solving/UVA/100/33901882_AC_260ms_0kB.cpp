#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
   // freopen("file.txt", "w", stdout);
    int i, j, n;
    while(scanf("%d%d", &i, &j) == 2)
    {   int Mx = 0, flag = 0;
        if(i > j) { swap(i, j); flag = 1;}
        for(int c = i; c <= j; c++)
        {
            int cnt = 1;
            n = c;
            while(n > 1)
            {
                if(n % 2)
                    n = 3 * n + 1;
                else
                    n = n / 2;
                cnt++;
            }
            Mx = max(cnt, Mx);
        }
        if(flag) swap(i, j);
        printf("%d %d %d\n", i, j, Mx);
    }
    return 0;
}
