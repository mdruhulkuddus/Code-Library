#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,number;
    double sumC=0, sumR=0, sumS=0,sum=0;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>number>>c;
        sum+=number;
        if(c=='C') sumC+=number;
        else if(c=='R') sumR+=number;
        else sumS+=number;
    }

    cout<<"Total: "<<sum<<" cobaias" <<"\n";
    cout<<"Total de coelhos: "<<sumC<<"\n";
    cout<<"Total de ratos: "<<sumR<<"\n";
    cout<<"Total de sapos: "<<sumS<<"\n";

    //cout<<sumC<<" "<<sum<<" d= "<<sumC/sum;
    cout<<setprecision(2)<<fixed<<"Percentual de coelhos: "<<(sumC/sum)*100<<" %"<<"\n";
    cout<<setprecision(2)<<fixed<<"Percentual de ratos: "<<(sumR/sum)*100<<" %"<<"\n";
    cout<<setprecision(2)<<fixed<<"Percentual de sapos: "<<(sumS/sum)*100<<" %"<<"\n";
    return 0;

}



