#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007
int f91(int n)
{
    if(n >= 101) return n - 10;
    return f91(f91(n + 11));
}
int main()
{
    int n;
    while(scanf("%d", &n) && n != 0)
    {
        if(n<=100) printf("f91(%d) = %d\n",n,91); else printf("f91(%d) = %d\n",n,n-10);
       // printf("f91(%d) = %d\n", n, f91(n));
    }
    return 0;
}

