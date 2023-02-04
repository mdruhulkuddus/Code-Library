#include<bits/stdc++.h>
using namespace std;

int main()
{

    double a,b,c,r1,r2;
    cin>>a>>b>>c;
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);

    r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);

    if(fabs(r1)>0 && fabs(r2)>0)

        cout<<setprecision(5)<<fixed<<"R1 = "<<r1<<endl<<"R2 = "<<r2<<endl;

    else cout<<"Impossivel calcular"<<endl;


    return 0;

}

