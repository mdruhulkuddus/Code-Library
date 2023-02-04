#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,t;
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2;

        if(n2==0) cout<<"divisao impossivel"<<"\n";
        else
        {
            double div =(float)n1/n2;
            cout<<setprecision(1)<<fixed<<div<<"\n";
        }


    }

    return 0;
}

