#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int cnt = 0;
        cin >> s;
        char a = NULL, b = NULL, c = NULL;
        for(int i = 0; i < s.size(); i++)
        {
            if(a == NULL) a = s[i];
            else if(a != s[i])
            {
                if(b == NULL)
                    b = s[i];
                else
                {
                    cnt++;
                    c = s[i];

                    while(1)
                    {
                        i++;
                        if(a == s[i] || b == s[i] || c == s[i] )
                            continue;
                        else { i--; break; }
                    }
                    a = NULL, b = NULL, c = NULL;
                }
            }

        }
        if(a != NULL || b != NULL) cnt++;
        cout << cnt << endl;
    }
    return 0;
}
