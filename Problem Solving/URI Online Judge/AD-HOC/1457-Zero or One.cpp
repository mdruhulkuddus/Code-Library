#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    while(cin>>x>>y>>z)
    {
        if(x==y && x==z) cout<<"*\n";
        else{
            if(x==y)cout<<"C\n";
            else if(x==z)cout<<"B\n";
            else if(y==z)cout<<"A\n";
        }
    }

    return 0;
}
