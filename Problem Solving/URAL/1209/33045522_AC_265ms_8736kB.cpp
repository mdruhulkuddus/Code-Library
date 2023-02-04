#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
    map<ll, int>mp; int cnt=0;
    for(ll i = 0, index_one = 1; index_one <= 2147483647; i++, index_one+=i)
    {
        mp[index_one]=1;
        cnt++;
    }
  // cout<<cnt<<endl;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(mp[n]) cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}

