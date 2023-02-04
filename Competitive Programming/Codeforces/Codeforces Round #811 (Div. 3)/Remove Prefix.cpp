#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int>st; int cnt = 0;
        for(int i = n - 1; i >= 0; i--)
        {
            st.insert(a[i]);
            cnt++;
            if(st.size() != cnt)
            {
                cout << n - st.size() << "\n";
                break;
            }
            else if(i == 0 && st.size() == cnt)
             {
                cout << 0 << "\n";
                break;
            }
        }

    }
    return 0;
}

