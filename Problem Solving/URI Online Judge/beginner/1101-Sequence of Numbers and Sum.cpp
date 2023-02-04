
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    while(true)
    {
        cin>>n1>>n2;
        if(n1<=0 || n2<=0) break;
        int temp =0,sum=0;


        if(n1>n2)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        for(int i =n1; i<=n2; i++)
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"Sum="<<sum<<"\n";

    }

    return 0;
}
