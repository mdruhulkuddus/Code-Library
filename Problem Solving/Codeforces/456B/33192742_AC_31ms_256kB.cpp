#include<iostream>

#include<string>

using namespace std;

int main()

{
    string s;

   long long  int a,b,l,v;

    cin>>s;

    l=s.size();

    a=s[l-1];

    b=s[l-2];

    v=b*10+a;

    if(v%4==0)

        cout<<"4"<<endl;

    else

        cout<<"0"<<endl;
}