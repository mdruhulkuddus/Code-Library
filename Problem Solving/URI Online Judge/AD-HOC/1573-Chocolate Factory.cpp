#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c && (a || b || c)) ///and if a or b or c equal 0, then while condition false and terminate
    {
        int multi= a*b*c;
        int cubeRoot= cbrt(multi);
        cout<<cubeRoot<<"\n";
    }

    return 0;
}


