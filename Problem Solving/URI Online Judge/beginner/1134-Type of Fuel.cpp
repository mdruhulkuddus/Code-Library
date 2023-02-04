#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,Alcohol=0, Gasoline =0, Diesel =0;

    while(cin>>t)
    {
        if(t==4) break;

        if(t==1) Alcohol++;
        else if(t==2) Gasoline++;
        else if(t==3) Diesel++;
        else continue;
    }



    cout<< "MUITO OBRIGADO" <<"\n";
    cout<< "Alcool: "<< Alcohol <<"\n";
    cout<< "Gasolina: "<< Gasoline <<"\n";
    cout<< "Diesel: "<< Diesel <<"\n";

    return 0;
}
