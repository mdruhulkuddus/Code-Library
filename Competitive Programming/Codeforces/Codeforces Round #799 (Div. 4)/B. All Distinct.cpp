#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        set<int>st;
        int n, v;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> v;
            st.insert(v);
        }
        int op = n- st.size();
        if(op%2 == 0)
            cout << st.size() << endl;
        else
            cout << st.size()-1 << endl;
    }

    return 0;
}
