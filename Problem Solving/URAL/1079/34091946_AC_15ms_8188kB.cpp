// timus/ural oj - 319948GN

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
#define MOD 1000000007

int MX[MAX + 5];
int Seq[MAX + 5];
void pre()
{
    Seq[0] = 0; Seq[1] = 1;
    MX[0] = 0, MX[1] = 1;
    for(int i = 1; i <= MAX/2; i++)
    {
        Seq[2*i] = Seq[i];
        MX[2*i] = max(Seq[2*i], MX[2*i - 1]);
        Seq[2*i + 1] = Seq[i] + Seq[i+1];
        MX[2*i + 1] = max(Seq[2*i + 1], MX[2*i]);
    }
}

int main()
{
    pre();
    int n;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0) break;
        printf("%d\n", MX[n]);
    }
    return 0;
}
