#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=15, even[15],odd[15],i=0,j=0;
    int cntEven=0, cntODD=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            even[i++]=n;
            cntEven++;
        }
        else
        {
            odd[j++]=n;
            cntODD++;
        }

    }
    int ii=0;
    if(cntEven>5)
    {
        for(int i =0; i<5; i++)
        {
            cout<<"par["<< i <<"] = "<< even[i] <<"\n";
            ii++;
        }
        cntEven-=ii;
    }

    else
    {
        int jj=0;
        for(int j =0; j<cntEven; j++)
        {
            cout<<"par["<< j <<"] = "<< even[j] <<"\n";
            jj++;
        }
    }
    int kk=0;
    if(cntODD>5)
    {

        for(int k =0; k<5; k++)
        {
            cout<<"impar["<< k <<"] = "<< odd[k] <<"\n";
            kk++;
        }
        cntODD-=kk;
    }

    else
    {
        int ll=0;
        for(int l =0; l<cntODD; l++)
        {
            cout<<"impar["<< l <<"] = "<< odd[l] <<"\n";
            ll++;
        }

    }
    if(cntODD>0)
    {
        for(int l =0; l<cntODD; l++)
        {
            cout<<"impar["<< l <<"] = "<< odd[kk++] <<"\n";
        }
    }
   if(cntEven>0)

    {
        for(int i =0; i<cntEven; i++)
        {
            cout<<"par["<< i <<"] = "<< even[ii++] <<"\n";

        }
    }

    return 0;
}


