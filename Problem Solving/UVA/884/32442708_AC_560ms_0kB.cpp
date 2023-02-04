// prime factorization -> is a way of expressing a number as a product of its prime factors
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

ll ans[MAX+5]; //initially all val 0

int primeCount(int n) // prime factorization
{
    int cnt = 0;
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                n/=i;
                cnt++;
            }
        }
    }
    if(n>1) cnt++;

    return cnt;
}
void preCalculate()
{
    ans[2]=1;
    for(int i = 3; i <= MAX; i++)
    {
        ans[i]=ans[i-1] + primeCount(i); /// f(3)=f(2) + pC(3)
    }
}

int main()
{
    preCalculate();
    int n;
    while(scanf("%d", &n) == 1)
    {
        printf("%lld\n",ans[n]);
    }
    return 0;
}

