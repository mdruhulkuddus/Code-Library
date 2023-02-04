#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    double n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        for(int i=1; i<=3; i++)
        {
            cin>>n;
            if(i==1) sum+=n*2;
            else if (i==2) sum+=n*3;
            else sum+=n*5;
        }
        cout<<setprecision(1)<<fixed<<sum/(2+3+5)<<"\n";
    }

    return 0;
}

