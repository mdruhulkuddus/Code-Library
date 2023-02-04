#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    scanf("%lld",&t);

    while(t--)
    {
        long long n,i,j,sum=0;
        scanf("%lld",&n);
        i=0;
        j=sqrtl(n);

        while(true)
        {
            sum=i*i+j*j;
            if(sum == n)
            {
                printf("Yes\n");
                break;
            }
            if(sum > n)
            {
                j--;
            }
            else
            {
                i++;
            }
            //cout<<i<<" "<<j<<"\n";
            if(i>j)
            {
                printf("No\n");
                break;
            }

        }

    }

    return 0;
}
