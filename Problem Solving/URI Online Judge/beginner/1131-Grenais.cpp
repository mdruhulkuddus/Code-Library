
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c=0,d=0,e=0,f,g,h,i,j=0,k=0,l=0;
    int x,y,z;
    while(1)
    {
        cin>>a>>b;
         if(a>b) l++;
        if(a<b) k++;
        if(a==b) j++;
        e++;
        cout<<"Novo grenal (1-sim 2-nao)\n";
        cin>>f;
        if(f==1)   continue;
        if(f==2) break;
    }
    cout<< e <<" grenais"<<"\n";
    cout<<"Inter:" << l<<"\n";
    cout<< "Gremio:"<<k <<"\n";
    cout<<"Empates:" << j<<"\n";
    if(l>k)
        printf("Inter venceu mais\n");
    if(l<k)
        printf("Gremio venceu mais\n");
    if(k==l)
        printf("Nao houve vencedor\n");

    return 0;
}

