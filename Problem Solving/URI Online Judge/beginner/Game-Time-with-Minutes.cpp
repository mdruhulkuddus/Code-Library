#include<bits/stdc++.h>
using namespace std;

int main()
{

    int hInt,iMint,hFin,fMin,total;
    cin>>hInt>>iMint>>hFin >>fMin;
    int hours,mint;
    int intTotalMint=hInt*60+iMint;
    int finTotalMint=hFin*60+fMin;


    mint=(finTotalMint-intTotalMint);

    if(mint<=0) mint=mint+24*60;

    cout<<"O JOGO DUROU "<<mint/60 <<" HORA(S) E "<< mint%60<<" MINUTO(S)"<<endl;



    return 0;

}



/*

 int hInt,iMint,hFin,fMin,total;
    cin>>hInt>>iMint>>hFin >>fMin;
    int hours,mint;
    int intTotalMint=hInt*60+iMint;
    int finTotalMint=hFin*60+fMin;


    if(hInt<=hFin )
    {
        mint=(finTotalMint-intTotalMint);

        if(mint==0)
            cout<<"O JOGO DUROU "<<24 <<" HORA(S) E "<< 0<<" MINUTO(S)"<<endl;
        else
            cout<<"O JOGO DUROU "<<mint/60 <<" HORA(S) E "<< mint%60<<" MINUTO(S)"<<endl;

    }
    else
    {
        mint=(24*60-intTotalMint)+finTotalMint;
        cout<<"O JOGO DUROU "<<mint/60 <<" HORA(S) E "<< mint%60<<" MINUTO(S)"<<endl;


    }

*/




