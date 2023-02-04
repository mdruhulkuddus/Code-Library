#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        int arr[n][n];

         for(int i = 0; i<n; i++)
            {
                int m = i+1;
                int k =2;
                for(int j=0; j<=i; j++,m--)
                {
                    arr[i][j]=m;

                }
                for(int j=i+1; j<n; j++,k++)
                {
                    arr[i][j]=k;
                }
            }

        for(int i = 0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)               //if first column print ago 2 space/ after first col print 3 space
                    printf("%3d",arr[i][j]); //here %3 means print 2 space
                else printf(" %3d",arr[i][j]); //here ago 1 space %3 means print 2 space total 3 space
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}







