
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    while(true)
    {
        cin>>n1>>n2;
        if(n1==n2) break;

        if(n1>n2) cout<<"Decrescente\n";
        else cout<<"Crescente\n";

    }

    return 0;
}
