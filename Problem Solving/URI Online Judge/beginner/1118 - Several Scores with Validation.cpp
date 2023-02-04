#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    double avg=0, n, a[2];
    while(true)
    {
        double a[2]= {0};
        int i=0;
        while(1)
        {

            cin>>n;
            if(n<0 || n>10)  cout<<"nota invalida"<<"\n";
            else
            {
                a[i]=n;
                ++i;
            }
            if(i==2)
            {
                double avg =(a[0]+a[1])/2;
                cout<<setprecision(2)<<fixed<<"media = "<<avg<<"\n";
                break;
            }
        }
        int y;
        while(1)
        {

            cin>>y;
            if(y==1 || y==2)
            {
                cout<<"novo calculo (1-sim 2-nao)"<<"\n";
                break;
            }

            else
            {
                cout<<"novo calculo (1-sim 2-nao)"<<"\n";
            }


        }
        if(y==1) continue;
        else break;
    }

    return 0;
}

