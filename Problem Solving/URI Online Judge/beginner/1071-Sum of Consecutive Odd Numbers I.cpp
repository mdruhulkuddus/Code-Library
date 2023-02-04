#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i=0,tmp=0,sum=0;
    cin>>a>>b;
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    for(i=a+1; i<=b-1; i++)
    {
        if(i%2==1 || i%2==-1)
            sum+=i;
    }

    cout<<sum<<"\n";


    return 0;
}
