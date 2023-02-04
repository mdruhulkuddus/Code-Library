#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int cnt=0,n[t+5]= {0};
        if(t==0) break;
        for(int i =0; i<t; i++)
        {
            cin>>n[i];
        }
        for(int i = 1; i<t-1; i++)
        {
            if(n[i]<n[i-1] && n[i]<n[i+1] || n[i]>n[i-1] && n[i]>n[i+1])
                cnt++;

        }
        if(n[0]>n[1] && n[0]>n[t-1] || n[0]<n[1] && n[0]<n[t-1] )
            cnt++;
        if(n[t-1]>n[0] && n[t-1]>n[t-2] || n[t-1]<n[0] && n[t-1]<n[t-2] )
            cnt++;
        cout<<cnt<<"\n";
    }


    return 0;
}

