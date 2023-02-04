// number of divisors of n is odd that n is square number /// if divisor odd , switch is on else off// so, i n is square->divisors odd-> switch ON ->yes \\ else no
///2^31 - 1 -> int range ,, here 2^32-1 > int range, so long long
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


