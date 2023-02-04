#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,cnt=0;
    for(int i=1; i<=5; i++)
    {
        cin>>n;
        if(n%2==0)
        {
            ++cnt;
        }
    }

     cout<<cnt<<" valores pares\n";
    return 0;
}
