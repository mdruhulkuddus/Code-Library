#include<bits/stdc++.h>
using namespace std;
int main()
{
    double M[12][12];
    int colNo;
    double sum=0.0;
    char s;
    cin>>colNo;
    cin>>s;

    for(int row = 0; row<12; row++)
    {
        for(int col = 0; col<12; col++)
        {

            cin>>M[row][col]; //[row][col] /data enter 2 no row
            if(colNo==col)
            sum+=M[row][col];
        }
    }

    if(s=='S')
        cout<<setprecision(1)<<fixed<<sum<<"\n";
    else
    cout<<setprecision(1)<<fixed<<sum/(12.0)<<"\n"; //if all element avg (row*col)// here only one row avg where have 12 element



    return 0;
}

