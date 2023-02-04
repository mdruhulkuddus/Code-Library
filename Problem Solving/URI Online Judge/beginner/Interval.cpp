#include<bits/stdc++.h>
using namespace std;

int main()
{

    double n;
    cin>>n;

    if(n<0.00 || n>100.00) cout<<"Fora de intervalo"<<"\n";
    else if(n>=0.00 && n<=25.00) cout<<"Intervalo [0,25]"<<"\n";
    else if(n>25.00 && n<=50.00) cout<<"Intervalo (25,50]"<<"\n";
    else if(n>50.00 && n<=75.00) cout<<"Intervalo [50,75]"<<"\n";
    else  cout<<"Intervalo (75,100]"<<"\n";


    return 0;

}


