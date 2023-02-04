#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l; string b;
        cin >> n >> b;
        l = n;
        if((n == 2 && b == "01") || (n == 2 && b == "10"))
        {
            cout << 0 << "\n"; continue;
        }
        if((n == 2 && b == "11") || (n == 2 && b == "00"))
        {
            cout << 2 << "\n"; continue;
        }
        if(n == 1)
        {
            cout << 1 << "\n"; continue;
        }
        for(int i = 1; i <= n/2 + 1; i++)
        {
            if((b[i-1] == '0' && b[n - i] == '1') || (b[i-1] == '1' && b[n - i] == '0'))
                {
                    l -= 2;
                    if(l == 0) {
                        cout << 0 << "\n";
                        break;
                    }
                    continue;
                }
            else{
                cout << l << endl;
                break;
            }

        }

    }

    return 0;
}
