#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i=0,cntIN=0,cntOUT=0;
    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n>=10 && n<=20) cntIN++;
        else cntOUT++;

    }
    cout<<cntIN<<" in"<<"\n"<<cntOUT<<" out\n";

    return 0;
}
