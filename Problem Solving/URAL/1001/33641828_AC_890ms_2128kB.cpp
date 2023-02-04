#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    vector <double> v;
    double n;
    while(cin >> n)
    {
        v.push_back(n);
    }
    for(int i = v.size()-1; i >= 0; i--)
    {
        cout << setprecision(4) << fixed << sqrt(v[i]) << endl;
    }
    return 0;
}

