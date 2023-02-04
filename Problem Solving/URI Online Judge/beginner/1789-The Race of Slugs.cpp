#include<bits/stdc++.h>
using namespace std;
#define max 500
int main()
{
    int t;
    int arr[max];

    while(scanf("%d",&t) != EOF)
    {
        for(int i = 0; i<t; i++)
        {
            cin>>arr[i];
        }
        int big = arr[0];

        for(int i =0; i<t; i++)
        {
            if(big<arr[i])
                big=arr[i];
        }
        if(big<10)
            cout<<1<<"\n";
        else if(big>=20)
            cout<<3<<"\n";
        else
            cout<<2<<"\n";

    }

    return 0;
}



