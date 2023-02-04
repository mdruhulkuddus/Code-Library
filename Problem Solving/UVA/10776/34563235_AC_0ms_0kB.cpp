#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

bool vist[100];
string s, cur;
int r;

void generat(int pos)
{
    if (cur.size() == r)
    {
        cout<<cur<<"\n";
        return;
    }
    for (int i = pos; i < s.size(); i++)
    {
        if (vist[i] == 0)
        {
            vist[i] = 1;
            cur.push_back(s[i]);
            generat(i + 1);
            vist[i] = 0;
            cur.pop_back();
        }
        while (i + 1 < s.size() && s[i] == s[i + 1])
        {
            i++;
        }
    }
}

int main()
{
    while(cin >> s >> r)
    {
        cur = "";
        memset(vist, 0, sizeof vist);
        sort(s.begin(), s.end());
        generat(0);
    }
    return 0;
}

