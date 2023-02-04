#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        int n, a[1200],sumMile=0,sumJuice=0,maxMile,minMile,maxJuice,minJuice;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            cin>>a[i]; // Mile(30+10=40) & Juice(30+15=45)
            sumMile+=(a[i]/30+1)*10;
            sumJuice+=(a[i]/60+1)*15;

        }
        // cout<<sumMile<<" "<<sumJuice<<"\n";
        if(sumMile==sumJuice)
            cout<<"Case "<< ++cas <<": Mile Juice "<< sumJuice <<"\n";
        else if(sumMile>sumJuice)

            cout<<"Case "<< ++cas <<": Juice "<< sumJuice <<"\n";
        else
            cout<<"Case "<< ++cas <<": Mile "<< sumMile <<"\n";
    }

    return 0;
}
