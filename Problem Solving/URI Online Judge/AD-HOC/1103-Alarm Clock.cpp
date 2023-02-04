#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1)
    {
        int start, endd,h1,h2,m1,m2;

        cin>>h1>>m1>>h2>>m2;
        if(h1==0 && m1==0 && h2==0 && m2==0) break;

        if(h1==0) start = 24*60+m1;
        else start= h1*60+m1;

        if(h2==0) endd = 24*60+m2;
        else endd= h2*60+m2;

        if(endd>start) cout<<endd-start<<"\n";
        else cout<<24*60- (start-endd)<<"\n";
    }

    return 0;
}
