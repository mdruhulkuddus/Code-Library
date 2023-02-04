#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000005
#define MOD 1000000007
#define BASE 257

ll prefix_hash[MAX + 5];
ll po[MAX + 5]; // po[R - L + 1] = Base^(R - L + 1)

void pre_cal(string &str)
{
    po[0] = 1; // something^0 = 1
    for(int i = 1; i <= str.size(); i++)
    {
        po[i] = (po[i - 1] * BASE) % MOD; // a^b = a^(b-1) * a --> 3^7 = 3^6 * 3
    }
    prefix_hash[0] = str[0]; // str[0] - 'a' + 1; //(a)97-97+1 = 1 ////same -> here 97 or 1 dose not matter, fix only safe base,
    for(int i = 1; i < str.size(); i++)
    {
        prefix_hash[i] = ((prefix_hash[i - 1] * BASE) + str[i]) % MOD;
    }
}

ll get_hash(int L, int R) // O(1)
{
    if(!L) return prefix_hash[R];
    return (prefix_hash[R] - (prefix_hash[L-1] * po[R-L+1] % MOD) + MOD) % MOD; // pH[R] - (pH[-1] * B^(R - L + 1))
}

int main()
{
    string s, t;
    cin >> s >> t;
    pre_cal(s);
    ll hash_of_t = 0;
    for(auto ch : t)
        hash_of_t = ((hash_of_t * BASE) + ch) % MOD;

    for(int i = 0; i + (int)t.size() <= (int)s.size(); i++) //O(|S|)
    {
        ll range_hash = get_hash(i, i + (int)t.size() - 1); //(0, 0+3-1)->(0, 2) //O(1)
        if(range_hash == hash_of_t)
            cout << i << "\n";
    }

    return 0;
}


/** bruteforce -> O(|s|*|T|)

int main()
{
    string s = "abcbcbabcbbc";
    string t = "bcb"; // 1 ,3, 7
    //pre_cal(s);
    for(int i = 0; i+t.size() <= s.size(); i++) //O(|S|)
    {
        string sub_s = s.substr(i, t.size()); //O(|T|)
        if(sub_s == t)
        cout<<i<<endl;
    }

    return 0;
}

*/
