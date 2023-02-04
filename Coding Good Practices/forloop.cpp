#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    for(int i = 0; i < n; i++) cout << i << '\n'; // better
    cout << "\n";
    for(int i = 0; i < n; ++i) cout << i << '\n'; // faster
    return 0;
}
