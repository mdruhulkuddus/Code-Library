#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[105];
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            int op; string s;
            cin >> op >> s;
            for(int j = 0; j < op; j++)
            {
                if(s[j] == 'D') {
                    if(a[i] == 9) a[i] -= 9;
                    else a[i] += 1;
                }
                else{
                    if(a[i] == 0) a[i] += 9;
                    else a[i] -= 1;
                }
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}



 
