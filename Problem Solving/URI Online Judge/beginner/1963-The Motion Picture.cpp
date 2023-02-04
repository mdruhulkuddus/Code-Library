#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    y=y-x;
    x=(y*100)/x;

    printf("%0.2lf%\n",x);


    return 0;
}

