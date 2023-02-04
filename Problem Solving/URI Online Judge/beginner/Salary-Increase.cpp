#include<bits/stdc++.h>
using namespace std;

int main()
{

double salry,newSalry,earn;
int percen;
cin>>salry;
if(salry>=0 && salry<=400.00)
{
    percen=15;
    newSalry=((salry*percen)/100)+salry;
    earn=newSalry-salry;

   cout<<"Novo salario: "<<setprecision(2) <<fixed<<newSalry <<endl;
   cout<<"Reajuste ganho: "<<setprecision(2) <<fixed<< earn <<endl;
   cout<<"Em percentual: "<< percen <<" %"<<endl;

}
else if(salry>=400.01 && salry<=800.00)
{
    percen=12;
    newSalry=((salry*percen)/100)+salry;
    earn=newSalry-salry;

   cout<<"Novo salario: "<<setprecision(2) <<fixed<<newSalry <<endl;
   cout<<"Reajuste ganho: "<<setprecision(2) <<fixed<< earn <<endl;
   cout<<"Em percentual: "<< percen <<" %"<<endl;

}
else if(salry>=800.01 && salry<=1200.00)
{
    percen=10;
    newSalry=((salry*percen)/100)+salry;
    earn=newSalry-salry;

   cout<<"Novo salario: "<<setprecision(2) <<fixed<<newSalry <<endl;
   cout<<"Reajuste ganho: "<<setprecision(2) <<fixed<< earn <<endl;
   cout<<"Em percentual: "<< percen <<" %"<<endl;

}
else if(salry>=1200.01 && salry<=2000.00)
{
    percen=7;
    newSalry=((salry*percen)/100)+salry;
    earn=newSalry-salry;

   cout<<"Novo salario: "<<setprecision(2) <<fixed<<newSalry <<endl;
   cout<<"Reajuste ganho: "<<setprecision(2) <<fixed<< earn <<endl;
   cout<<"Em percentual: "<< percen <<" %"<<endl;

}
else
{
    percen=4;
    newSalry=((salry*percen)/100)+salry;
    earn=newSalry-salry;

   cout<<"Novo salario: "<<setprecision(2) <<fixed<<newSalry <<endl;
   cout<<"Reajuste ganho: "<<setprecision(2) <<fixed<< earn <<endl;
   cout<<"Em percentual: "<< percen <<" %"<<endl;

}
//main();
    return 0;

}
