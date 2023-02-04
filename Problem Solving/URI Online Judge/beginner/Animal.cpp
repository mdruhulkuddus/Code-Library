#include<bits/stdc++.h>
#include <cstring>
using namespace std;
void vert(string s1, string s2)
{
    if(s1=="ave")
    {
        if(s2=="carnivoro")
        {
            cout<<"aguia\n";
        }
        else cout<<"pomba\n";


    }
    else
    {
        if(s2=="onivoro") cout<<"homem\n";
        else cout<<"vaca\n";
    }
}
void invert(string s1, string s2)
{
    if(s1=="inseto")
    {
        if(s2=="hematofago")
        {
            cout<<"pulga\n";
        }
        else cout<<"lagarta\n";


    }
    else
    {
        if(s2=="hematofago") cout<<"sanguessuga\n";
        else cout<<"minhoca\n";
    }
}
int main()
{
    string str,s1,s2;

    cin>>str>>s1>>s2;

    if(str=="vertebrado")
        vert(s1,s2);
    else invert(s1,s2);


    return 0;

}
