#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        scanf("%lld%lld",&n,&m);
        //m-=1;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        int flag =0;
        for (int i = 0; i < n; ++i)
            if (a[i] != -1)
            {
                flag = i;
                break;
            }
        for(int i = flag+1; i < n; i++)
        {
            if(a[i]<0)
            {
                a[i]=(a[i-1]+1)%m;
            }
        }
        for(int i = flag-1; i >=0; i--)
        {
            if(a[i]<0)
            {
                a[i]=(a[i+1]-1+m)%m;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<< a[i] << " ";
        }
        cout<<"\n";
    }
    return 0;
}
