#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n, flag = 0; string s1, s2;
        cin >>n >> s1 >> s2;
        for(int i = 0; i < n; i++)
        {
            if(s1[i] == s2[i] || s1[i] == 'G' && s2[i] == 'B' || s1[i] == 'B' && s2[i] == 'G')
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }
        if(flag) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }

    return 0;
}


