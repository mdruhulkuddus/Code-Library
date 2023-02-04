#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tea, teaType, cnt=0, t=5;
    cin>>tea;
    while(t--)
    {
        cin>>teaType;
        if(tea==teaType)
            cnt++;

    }
    cout<<cnt<<"\n";


    return 0;
}

