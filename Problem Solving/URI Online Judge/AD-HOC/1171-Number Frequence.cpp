#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n[t+5];
    for(int i =0; i<t; i++)
        cin>>n[i];
    sort(n, n+t);
    for(int i =0; i<t; i++ )
    {
        int cnt=1;
        if(n[i]==0) continue;
        for(int j =0; j<t; j++)
        {
            if(i==j) continue;
            if(n[i]==n[j])
            {
                cnt++;
                n[j]=0;
            }
        }

        cout<< n[i] <<" aparece "<< cnt <<" vez(es)\n";
        n[i]=0;
    }

    return 0;
}


