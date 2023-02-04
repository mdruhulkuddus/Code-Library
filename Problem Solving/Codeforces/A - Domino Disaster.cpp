#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;

        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'U') str[i]='D';
            else if(str[i] == 'D') str[i]='U';
        }
        cout<<str<<endl;
    }

    return 0;
}


