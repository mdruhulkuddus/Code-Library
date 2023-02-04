#include<bits/stdc++.h>
using namespace std;

int main()
{
    int step, endNum;
    cin>>step>>endNum;

    int n=0;
    for(int i=1; i<=endNum; i++)
    {



        cout<<i;
        n++;

        if(n==step)
        {
            cout<<"\n";
            n=0;

        }


        else cout<<" ";



    }
    return 0;
}

