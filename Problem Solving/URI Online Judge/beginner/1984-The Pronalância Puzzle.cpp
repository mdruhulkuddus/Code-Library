#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,arr[100],j=0;
    cin>>n;
    while(n != 0)
    {
        int mod = n%10;
        arr[j++]=mod;
        n/=10;

    }
    for(int i = 0; i<j; i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";


    return 0;
}
