#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string str = "Timur";
    sort(str.begin(), str.end());

    while(T--)
    {
        int n; string s;
        cin >>n >> s;
        sort(s.begin(), s.end());
        if(s == str)
            cout << "yes" << "\n";
        else cout << "no" << "\n";

    }

    return 0;
}

