#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i=0,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0) cout<<"NULL\n";
        else if(n%2==0)
        {
            if(n>0) cout<<"EVEN POSITIVE\n";
            else  cout<<"EVEN NEGATIVE\n";
        }
        else
        {
            if(n>0) cout<<"ODD POSITIVE\n";
            else  cout<<"ODD NEGATIVE\n";
        }

    }

    return 0;
}

