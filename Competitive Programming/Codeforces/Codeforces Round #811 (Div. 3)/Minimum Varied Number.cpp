#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[20], j = 0;
        cin >> n;
        for(int i = 9; i >= 0; i--)
        {
            if(n >= i)
            {
                n -= i;
                a[j++] = i;
            }
            if(n <= 0) break;
        }
        for(int i = j - 1;  i >= 0; i--)
            cout << a[i];
        cout << "\n";
    }
    return 0;
}


