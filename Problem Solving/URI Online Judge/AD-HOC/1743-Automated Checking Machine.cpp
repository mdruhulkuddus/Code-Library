#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,a[5], b[5];
    for(int i =0; i<5; i++)
        cin>>a[i];

    for(int i =0; i<5; i++)
        cin>>b[i];
    int flag=1;
    while(i<5)
    {
        cout<<a[i]<<" "<<b[i]<<"\n";
        if(a[i]==b[i])
        {
            flag=0;
            break;
        }

        i++;
    }
    if(flag==1) cout<<"Y\n";
    else cout<<"N\n";

    return 0;
}

