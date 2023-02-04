#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,sum=0,cnt=0;
    for(int i=1; i<=5; i++)
    {
        cin>>n;
        if(n>0)
        {
            sum+=n;
            ++cnt;
        }
    }

     printf("%.0lf valores positivos\n%.1lf\n", cnt, sum/cnt);
    return 0;
}
