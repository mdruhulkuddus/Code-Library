#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,A,B;
       cin>>a>>b;

       A=a+b;
       B=a-b;

       if(a<b) cout<<"impossible"<<"\n";
       else if(A<0 || A&1 || B&1 || B<0) cout<<"impossible"<<"\n";
       else cout<<A/2<<" "<<B/2<<"\n";

    }
    return 0;
}
