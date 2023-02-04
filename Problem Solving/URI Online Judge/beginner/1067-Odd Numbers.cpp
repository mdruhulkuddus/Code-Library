#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,cnt=0;
    cin>>n;

    while(1)
    {
        if(n%2 != 0) {
            cnt++;
            cout<<n<<"\n";
        }
        n++;
        if(cnt==6) break;

    }

    return 0;
}
