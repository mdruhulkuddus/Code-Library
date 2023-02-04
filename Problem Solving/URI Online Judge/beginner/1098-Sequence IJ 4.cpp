#include<bits/stdc++.h>
using namespace std;

int main()
{

double i=0, j=1;
   while(i<2.1)
   {
       cout<<"I="<< i <<" J="<< j <<"\n";
       cout<<"I="<< i <<" J="<< j+1 <<"\n";
       cout<<"I="<< i <<" J="<< j+2 <<"\n";

    i+=.2;
    j+=.2;
   }
    return 0;

}
