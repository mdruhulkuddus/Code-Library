#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int n,cnt1=0, cnt0=0;
        if(t==0) break;
        for(int i =0; i<t; i++)
        {
            cin>>n;
            if(n==0) cnt0++;
            else cnt1++;

        }
        cout<<"Mary won "<< cnt0 <<" times and John won "<< cnt1 <<" times\n";
    }

    return 0;
}
