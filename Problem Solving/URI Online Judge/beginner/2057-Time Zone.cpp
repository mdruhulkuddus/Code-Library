
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1,t2,t3;
    cin>>t1>>t2>>t3;
    if(t1==0) t1=24;
    int time = t1+t2+t3;
   // cout<<time<<"\n";
    if(time>24)
        time-=24;
    else if(time==24)
        time=0;
    cout<<time<<"\n";

    return 0;
}

