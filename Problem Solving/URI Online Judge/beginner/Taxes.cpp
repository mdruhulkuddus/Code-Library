#include<bits/stdc++.h>
using namespace std;

int main()
{

    double salry,tax,tax1k,tax5;
    int percen;
    cin>>salry;
    if(salry>=0.00 && salry<=2000.00)
    {
        cout<<"Isento\n";

    }
    else if(salry>=2000.01 && salry<=3000.00)
    {
        salry-=2000.00;
        percen=8;
        tax=((salry*percen)/100);

        cout<<"R$ "<<setprecision(2)<<fixed<<tax<<endl;

    }
    else if(salry>=3000.01 && salry<=4500.00)
    {
        salry-=2000.00;
        salry=salry-1000;
        tax1k=((1000.00*8)/100);
        percen=18;
        // cout<<salry<<endl;
        tax=((salry*percen)/100);
        tax+=tax1k;
        cout<<"R$ "<<setprecision(2)<<fixed<<tax<<endl;

    }
    else
    {
        salry-=2000.00;
        salry-=1000;
        salry-=1500.00;
        //cout<<salry<<endl;
        tax1k=((1000.00*8)/100);
        tax5=((1500.00*18)/100);
        percen=28;
        tax=((salry*percen)/100);
        tax=tax+tax1k+tax5;
        cout<<"R$ "<<setprecision(2)<<fixed<<tax<<endl;

    }

    return 0;

}
