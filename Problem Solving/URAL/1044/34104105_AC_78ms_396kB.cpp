#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int cnt = 0;
    if(n == 2)
    {
        for(int i = 0; i <= 9; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                if(i == j) cnt++;
            }
        }
    }
    else if(n == 4)
    {
        for(int i = 0; i <= 9; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                for(int k = 0; k <= 9; k++)
                {
                    for(int l = 0; l <= 9; l++)
                    {
                        if(i+j == k+l) cnt++;
                    }
                }
            }
        }
    }
    else if(n == 6)
    {
        for(int i = 0; i <= 9; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                for(int k = 0; k <= 9; k++)
                {
                    for(int l = 0; l <= 9; l++)
                    {
                        for(int m = 0; m <= 9; m++)
                        {
                            for(int n = 0; n <= 9; n++)
                            {
                                if(i+j+k == l+m+n) cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    else if(n == 8)
    {
        for(int i = 0; i <= 9; i++)
        {
            for(int j = 0; j <= 9; j++)
            {
                for(int k = 0; k <= 9; k++)
                {
                    for(int l = 0; l <= 9; l++)
                    {
                        for(int m = 0; m <= 9; m++)
                        {
                            for(int n = 0; n <= 9; n++)
                            {
                                for(int o = 0; o <= 9; o++)
                                {
                                    for(int p = 0; p <= 9; p++)
                                    {
                                        if(i+j+k+l == m+n+o+p) cnt++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

