#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dec, temp, quotient, j=0;
    char hex[100];

    cin>>dec;

    while(dec != 0)
    {
        temp = dec%16;
        dec= dec/16;
        if(temp<10)
        {
            hex[j++]=temp+48; // dec(1)+48 = 49 -> char 1
        }
        else
        {
                hex[j++]=temp+55; //// dec(10)+48 = 49 -> char A
        }
    }
    for(int i = j-1; i>=0; i--)
    {
        cout<<hex[i];
    }
    cout<<"\n";

    return 0;
}
