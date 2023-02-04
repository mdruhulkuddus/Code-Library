#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
      int n;
      cin >> n;
      map<string, int>mp;
      vector<string>vec[3];
      string s;
      for(int i = 0; i < 3; i++)
      {
          for(int j = 0; j < n; j++)
          {
              cin >> s;
              vec[i].push_back(s);
              mp[s]++;
          }
      }
        for(int j = 0; j < 3; j++)
      {
          int res = 0;
          for(auto st : vec[j])
          {
             if(mp[st] == 1)
              res += 3;
             else if(mp[st] == 2)
                res += 1;
             else res += 0;
          }
          cout << res << " ";
      }
      cout << "\n";
    }

    return 0;
}

