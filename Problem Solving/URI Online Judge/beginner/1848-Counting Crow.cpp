#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    int sum=0, countt=1;
    while(countt<=3)
    {
        getline(cin, str);
        if(str[0]=='c')
        {
            cout<<sum<<"\n";
            sum = 0;
            countt++;
        }
        else
        {
            if(str=="---")
                sum+=0;
            else if(str=="--*")
                sum+=1;
            else if(str=="-*-")
                sum+=2;
            else if(str=="-**")
                sum+=3;
            else if(str=="*--")
                sum+=4;
            else if(str=="*-*")
                sum+=5;
            else if(str=="**-")
                sum+=6;
            else if(str=="***")
                sum+=7;

        }
    }


    return 0;
}

