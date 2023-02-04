#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t,cnt=0;
    cin>>t;
    int major= t/2;
    //cout<<major;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0) cnt++;
    }
    //cout<<major<<" "<<cnt<<"\n";
    if(cnt>major) cout<<"Y\n";
    else  cout<<"N\n";

    return 0;
}

