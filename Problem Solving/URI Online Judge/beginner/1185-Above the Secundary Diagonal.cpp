/// lower triangle is  down element of main diagonal

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double M[12][12];
    double sum=0.0;
    char s;
    cin>>s;

    for(int row = 0; row<12; row++)
    {
        for(int col = 0; col<12; col++)
        {

            cin>>M[row][col];
            if(row+col < 12-1)
            sum+=M[row][col];
        }
    }

    if(s=='S')
        cout<<setprecision(1)<<fixed<<sum<<"\n";
    else
    cout<<setprecision(1)<<fixed<<sum/(66.0)<<"\n";



    return 0;
}



