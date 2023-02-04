#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X;

    while(cin>>X)
    {
        if(X==0) break;

        int i = 0,sum=0;

        while(i<5){
                if(X%2 == 0){
                    sum+=X;
                    i++;
                }
                X++;
            }
         cout<<sum<<"\n";
    }

return 0;
}


