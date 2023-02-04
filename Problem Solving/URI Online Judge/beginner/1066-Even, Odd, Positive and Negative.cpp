#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,even=0,odd=0,pos=0,neg=0;
    for(int i=1; i<=5; i++)
    {
        cin>>n;
        if(n>0)
        {
           pos++;
        }
        if(n<0) neg++;
        if(n%2==0)
        {
            ++even;
        }
        if(n%2 != 0) odd++;
    }

     cout<<even<<" valor(es) par(es)\n";
     cout<<odd<<" valor(es) impar(es)\n";
     cout<<pos<<" valor(es) positivo(s)\n";
     cout<<neg<<" valor(es) negativo(s)\n";
    return 0;
}

