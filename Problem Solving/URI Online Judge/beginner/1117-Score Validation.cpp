#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    double avg=0, n, a[2];
    while(true)
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

    return 0;
}


