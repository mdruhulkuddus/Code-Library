#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,index=0;
    cin>>t;
    int N[t];
    for(int i = 0; i<t; i++)
    {
        cin>>N[i];
    }
    int small= N[0];
    for(int i = 1; i<t; i++)
    {
        if(N[i]<small)
        {
            small = N[i];
            index = i;
        }

    }
    cout<<index+1<<"\n";
    return 0;
}
