#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> m;
    for (char c : s) {
      m[c]++;
    }
    int max_count = 0;
    for (auto it : m) {
      max_count = max(max_count, it.second);
    }
    cout << min(n - max_count + 1, n / 2) << endl;
  }
  return 0;
}

