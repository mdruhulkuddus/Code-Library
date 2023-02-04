#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    double b;

    cin>>w>>b;

    if(w%5==0 && w<= (b-0.5)) cout<<setprecision(2)<<fixed<<(b-w)-0.5<<"\n";
    else cout<<setprecision(2)<<fixed<<b<<"\n";

    return 0;
}
