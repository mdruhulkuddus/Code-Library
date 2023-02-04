#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    int n;
    vector<int>p;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("1\n");
        return 0;
    }
    else if(n == 0)
    {
        printf("10\n");
        return 0;
    }
    for(int i = 9; i >= 2; i--)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n = n /i;
                p.push_back(i);
            }
        } 
if(n <= 1) break;
    }
    if(n != 1) printf("-1\n");
    else
    {
        for(int i = p.size()-1; i >= 0; i--)
            printf("%d", p[i]);
    }
    puts("");
    //main();
    return 0;
}
