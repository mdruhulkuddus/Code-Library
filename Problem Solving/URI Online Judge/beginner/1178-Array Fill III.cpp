#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t;
    cin>>t;

    for(int i=0; i<100; i++)
    {

        printf("N[%d] = %0.4lf\n",i,t);
        t=t/2;

    }

    return 0;
}





