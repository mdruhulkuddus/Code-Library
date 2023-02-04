#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string y;
        cin >> y;
        if(y[0] == 'Y' || y[0] == 'y')
        {
            if(y[1] == 'e' || y[1] == 'E')
            {
                if(y[2] == 's' || y[2] == 'S')
                {
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;

    }
    return 0;
}


