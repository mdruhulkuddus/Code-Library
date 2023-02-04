#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag = 0, UD = 0, RL = 0; string s;
        cin >> n >> s;
       for(int i = 0; i < n; i++)
       {
           if(s[i] == 'U') UD++;
           if(s[i] == 'D') UD--;
           if(s[i] == 'R') RL++;
           if(s[i] == 'L') RL--;
        if(UD == 1 && RL == 1)
        {
            cout << "yes" << "\n";
            flag = 0;
            break;
        }
        else flag = 1;
       }
       if(flag) cout << "no" << "\n";
    }


    return 0;
}
