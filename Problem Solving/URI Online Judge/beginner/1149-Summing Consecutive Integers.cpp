#include<bits/stdc++.h>

using namespace std;

int main()
{
    int A, N;

    cin>>A>>N;
    while(N<=1) cin>>N;


            int sum =0;
            for(int i=1; i<=N; i++ )
            {
                sum+=A;
                A++;
            }
            cout<<sum<<"\n";



    return 0;
}
