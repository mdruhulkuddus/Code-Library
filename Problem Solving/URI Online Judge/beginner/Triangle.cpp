#include<bits/stdc++.h>
using namespace std;

int main()
{

    double a,b,c,h,area,Perimetro ;
    cin>>a>>b>>c;
    h=c;
    if(a+b>c && b+c>a && c+a>b)
    {
        Perimetro=a+b+c;
        cout<<setprecision(1)<<fixed<<"Perimetro = "<<Perimetro<<"\n";
    }
    else
    {

        area=((a+b)/2)*h;
        cout<<setprecision(1)<<fixed<<"Area = "<<area<<"\n";
    }

    return 0;

}





