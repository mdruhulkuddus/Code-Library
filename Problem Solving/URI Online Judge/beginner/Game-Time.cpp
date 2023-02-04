#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    int hours;
    if(a>b)
    {
        hours=24-(a-b);
        cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;

    }
    else if(a==b)  cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;
    else
    {
        hours=b-a;
        cout<<"O JOGO DUROU "<<hours<<" HORA(S)"<<endl;
    }
   // main();
    return 0;

}








