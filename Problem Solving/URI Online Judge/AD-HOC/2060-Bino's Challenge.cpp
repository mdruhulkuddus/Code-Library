#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i =0; i<t; i++)
    {
        cin>>arr[i];

    }
    for(int j=2; j<6; j++)
    {
        int cnt=0;
        for(int i =0; i<t; i++)
        {
            if(arr[i]%j==0) cnt++;
        }
        cout<<cnt <<" Multiplo(s) de "<< j <<"\n";
    }

    return 0;
}
