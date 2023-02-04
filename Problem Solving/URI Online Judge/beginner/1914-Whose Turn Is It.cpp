#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[4];
    int t;
    cin>>t;
    while(t-->0) //(t--) > 0
    {
        int a,b;
        cin>>str[0]>>str[1]>>str[2]>>str[3];
        cin>>a>>b;
        if((a+b)%2==0)
        {
            if(str[1]=="PAR")
                cout<<str[0]<<endl;
            else
                cout<<str[2]<<endl;
        }
        else
        {
            if(str[1]=="IMPAR")
                cout<<str[0]<<endl;
            else
                cout<<str[2]<<endl;
        }
    }

    return 0;
}
