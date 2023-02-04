#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(1)
    {
        cin>>n;
        if(n==0) break;
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i==n) cout<<i;
                else cout<<i<<" ";
            }
        }
        cout<<"\n";

    }

    return 0;
}
