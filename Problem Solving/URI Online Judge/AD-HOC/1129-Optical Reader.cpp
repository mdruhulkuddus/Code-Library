#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {

        if(t==0) break;
        for(int i =1; i<=t; i++)
        {
            int position=0,cnt=0;
            for(int j =1; j<=5; j++)
            {

                int n;
                cin>>n;
                if(n <= 127)
                {
                    cnt++;
                    position=j;

                }

            }
            if(cnt==1)
            {
                if(position==1) cout<<"A\n";
                else if(position==2) cout<<"B\n";
                else if(position==3) cout<<"C\n";
                else if(position==4) cout<<"D\n";
                else if(position==5) cout<<"E\n";
            }

            else
                cout<<"*\n";

        }
    }

    return 0;
}
