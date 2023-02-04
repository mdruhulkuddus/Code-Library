//lucky number = 4/7 have number
//super lucky = a number where 4 & 7 are equal
// lucky number = LN, numbers = LNs
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isSuperLucky(string &LN)
{
    int c4 = 0, c7 = 0;
    for(auto c : LN)
    {
        c4 += c == '4';
        c7 += c == '7';
    }
    return c4 == c7;
}

vector<ll>LNs;
void genLuckyNum(int n, string &LuckyNum)
{
    if(LuckyNum.size() > n) return;
    if(LuckyNum.size() > 0 && isSuperLucky(LuckyNum))
        LNs.push_back(stoll(LuckyNum));

    LuckyNum.push_back('4');
    genLuckyNum(n, LuckyNum);
    LuckyNum.pop_back();

    LuckyNum.push_back('7');
    genLuckyNum(n, LuckyNum);
    LuckyNum.pop_back();
}

int main()
{
    string str = "";
    genLuckyNum(10, str);
    sort(LNs.begin(), LNs.end());
    ll n;
    cin >> n;
    cout<< *lower_bound(LNs.begin(), LNs.end(), n) <<endl;
    return 0;
}
