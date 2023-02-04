#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f1=0, f2=1;
    cin>>n;
    for(int i=0; i<n; i++ )
    {
        cout<<f1; if(i<n-1) cout<<" ";
        int fibo = f1+f2;
        f1=f2;
        f2=fibo;
        //cout<<f1<<" "<<f2<<"\n";

    }
    cout<<"\n";


return 0;
}
