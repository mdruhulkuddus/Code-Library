#include<bits/stdc++.h>
using namespace std;

bool isSquare(long long n)
{
    long long  sq = sqrtl(n);  // sqrt( 32 bit) // sqrtl() process long long number
    return sq*sq == n;
}

int main()
{
    long long n;
    while(cin>>n)
    {
        if(n <=0 ) break;
        if(isSquare(n)) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
