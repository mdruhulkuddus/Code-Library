#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int a, b,a2,b2;
        cin>>a>>b>>a2>>b2;
        if(a==0 && a2==0 && b==0 &&b2==0) break;

        if(a==a2 && b==b2) cout<<"0\n";
        else if(abs(a2-a) == abs(b2-b)) cout<<"1\n";
        else if(a==a2 || b==b2) cout<<"1\n";
        else cout<<"2\n";

    }

    return 0;
}

