#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxN=0,maxPositon=0,j=0;
    for(int i=1; i<=5; i++)
    {
        cin>>n;
        if(maxN<n)
        {   maxPositon=i;
            maxN=n;
        }
    }
    cout<<maxN<<"\n"<<maxPositon<<endl;
    return 0;

}


