#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int X, j=0,cpy;
        cin>>X;
        for(int i =2; i<X; i++)
        {

            if(X%i == 0)
            {
                j++;
                break;
            }


        }
        if(j==1) cout<<X <<" nao eh primo\n";
        else
            cout<<X <<" eh primo\n";


    }

    return 0;
}


