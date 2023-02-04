#include<bits/stdc++.h>
using namespace std;
#define eps 1e-8
void two_Non_Negetive_Numbers_of_n(double d)
{
    double M, L, R, dD = 1.0 * d;
    if(d == 0)
        printf("Y 0.000000000 0.000000000\n");
    else if(d > 0 && d < 4)
        printf("N\n");
    else if(d == 4)
        printf("Y 2.000000000 2.000000000\n");
    else
    {
        L = 0.0;
        R = d;
        int cnt = 50;
        while(cnt--)
        {
            M = L + (R - L)/2.0; // mid is a
            double b = dD - M;
            if(M * b < dD)
                R = M;
            else
                L = M;
        }
        printf("Y %0.9lf %0.9lf\n", M, d-M);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        two_Non_Negetive_Numbers_of_n(n);
    }

    return 0;
}

