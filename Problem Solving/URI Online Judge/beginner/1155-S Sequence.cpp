#include<bits/stdc++.h>
using namespace std;

int main()
{
    double i, j=1, sum=0;
    for( i=1; i<=39; i+=2)
    {
    double div = i/j;
    sum+=div;
    j*=2;
    }
    cout<<setprecision(2)<<fixed<<sum<<"\n";
    return 0;
}

