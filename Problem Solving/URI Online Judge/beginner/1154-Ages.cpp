#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
int cnt=0, sum=0;
    while(1)
    {
        cin>>n;
        if(n>0)
        {
            sum+=n;
        cnt++;
        }
        else break;
    }
    double avg = (double) sum/cnt;
    cout<<setprecision(2)<<fixed<<avg<<"\n";
    return 0;
}
