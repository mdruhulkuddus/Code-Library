#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    while(true)
    {
        cin>>n1>>n2;
        if(n1==0 || n2==0) break;

        if(n1>0 && n2>0) cout<<"primeiro"<<"\n";
        else if(n1>0 && n2<0) cout<<"quarto"<<"\n";
        else if(n1<0 && n2<0) cout<<"terceiro"<<"\n";
        else  cout<<"segundo"<<"\n";


    }

    return 0;
}
