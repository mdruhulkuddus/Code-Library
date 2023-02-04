//less than 0 means negative or minus value
#include<bits/stdc++.h>
using namespace std;

int main()
{

    double x,y;
    cin>>x>>y;
    if(x==0.0 && y==0.0) cout<<"Origem"<<endl;
    else if (x == 0) printf("Eixo Y\n");
    else if (y == 0) printf("Eixo X\n");
    else if(x>0.0 && y>0.0) cout<<"Q1"<<endl;
    else if(x<0.0 && y>0.0 ) cout<<"Q2"<<endl;
    else if(x<0.0 && y<0.0 ) cout<<"Q3"<<endl;
    else cout<<"Q4"<<endl;

    return 0;

}



