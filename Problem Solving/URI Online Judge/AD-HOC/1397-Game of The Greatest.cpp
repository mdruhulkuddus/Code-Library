#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int x,y,cnt1=0, cnt2=0;
        if(t==0) break;
        for(int i =0; i<t; i++)
        {
            cin>>x>>y;
            if(x>y) cnt1++;
            else if(x<y) cnt2++;

        }
        cout<<cnt1<<" "<<cnt2<<"\n";
    }

    return 0;
}
