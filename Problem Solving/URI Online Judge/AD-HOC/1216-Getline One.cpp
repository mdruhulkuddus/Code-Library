#include<bits/stdc++.h>
using namespace std;
int main()
{
    double val, cnt=0, sum=0.0;
     string s;

    while(getline(cin,s))
    {
        scanf("%lf",&val);
        sum+=val;
        cnt++;

    }

    cout<<setprecision(1)<<fixed <<sum/cnt<<"\n";

    return 0;
}



