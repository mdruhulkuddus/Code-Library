#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int regCpy=0;
    double scoreCPy=0.0;
    while(t--)
    {

        int reg;
        double score;
        cin>>reg>>score;
        if(score>scoreCPy)
        {
            scoreCPy=score;
            regCpy=reg;
        }
    }
    if(scoreCPy<8)
        cout<<"Minimum note not reached\n";
    else
        cout<<regCpy<<"\n";

    return 0;
}
