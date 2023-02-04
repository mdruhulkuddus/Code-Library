#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X, sum=0;
        cin>>X;
        for(int i =1; i<X; i++)
        {
            if(X%i == 0)
            {
                sum+=i;
            }
        }
        if(sum==X)
            cout<<X <<" eh perfeito\n";
        else cout<<X <<" nao eh perfeito\n";

    }

    return 0;
}

