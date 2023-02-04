#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  f1=0, f2=1;
   // cin>>n;
    long long arr[61];
    for(int i=0; i<=60; i++ )
    {
        arr[i]=f1;
        long long fibo = f1+f2;
        f1=f2;
        f2=fibo;
        //cout<<f1<<" "<<f2<<"\n";

    }
    //cout<<"\n";
//    for(int i=0; i<60; i++ )
//    {
//        cout<<arr[i]<<"\n";
//    }

    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Fib("<< n <<") = "<<arr[n]<<"\n";
    }

return 0;
}

