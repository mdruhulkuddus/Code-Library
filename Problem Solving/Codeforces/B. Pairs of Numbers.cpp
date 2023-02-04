#include<bits/stdc++.h>
using namespace std;

///O(logn)
int UP(int a, int b) // child - to - parent -> (1, 1)
{
    if(a == 1 && b == 1) return 0;
    if(a < 1 || b < 1) return INT_MAX/2;
    if(a > b)
        return 1 + UP(a - b, b);
    else
        return 1 + UP(a, b - a);
}

int main()
{
    int n;
    cin >> n;
    int res = INT_MAX/2;
    for(int i = 1; i <= n; i++) //O(n) // O(n) + (logN) = O(nlogn)
    {
        res = min(res, UP(i, n));
    }
    cout<< res << endl;

    return 0;
}
