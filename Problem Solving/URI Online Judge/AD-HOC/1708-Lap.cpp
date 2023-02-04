#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    a=abs(a-b);
    b=ceil(b/a);
    //cout<<floor(b/a)<<"\n"; //floor not take digit after decimal
    cout<<b<<"\n";

    return 0;
}
