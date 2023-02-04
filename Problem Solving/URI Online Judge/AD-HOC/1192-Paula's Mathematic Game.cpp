#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        int a,b;
        cin>>a>>ch>>b;
        if(ch >= 'A' and ch <= 'Z')
        {
            if(a==b) cout<<a*b<<"\n";
            else cout<<b-a<<"\n";
        }
        else
        {
            if(a==b) cout<<a*b<<"\n";
            else cout<<b+a<<"\n";
        }
    }

    return 0;
}



