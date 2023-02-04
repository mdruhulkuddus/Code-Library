#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int i = 0,sum=0, X,Y;
        cin>>X>>Y;

        while(Y>i){
                if(X%2!=0){
                    sum+=X;
                    i++;
                }
                X++;
            }
         cout<<sum<<"\n";
    }

return 0;
}

