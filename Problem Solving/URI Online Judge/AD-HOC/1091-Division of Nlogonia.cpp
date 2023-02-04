#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    while(1)
    {
        int n,m;
        cin>>t;
        if(t==0) break;
        cin>>n>>m;

        for(int i = 0; i<t; i++)
        {
            int x,y;
            cin>>x>>y;
            if(x == n || y == m) printf("divisa\n");
            else if(x > n && y > m) printf("NE\n");
            else if(x > n && y < m) printf("SE\n");
            else if(x < n && y > m) printf("NO\n");
            else if(x < n && y < m) printf("SO\n");
        }
    }

    return 0;
}

