#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        if(t==0) break;
        string str, cpyStr;
        int fixdYear=2114, year, tillYear;
        for(int i =0; i<t; i++)
        {
            cin>>str>>year>>tillYear;
            if(year-tillYear < fixdYear)
            {
                fixdYear=year-tillYear;
                cpyStr=str;
            }
        }
        cout<<cpyStr<<"\n";
    }

    return 0;
}

