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
        string s;
        cin >> s;
        set<char> st;
        for(int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        int result = st.size() * 2;
        n = n - st.size();
        result = n + result;
        cout << result << endl;
    }
    return 0;
}



