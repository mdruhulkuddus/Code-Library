#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool isValid(string s)
{
    int n = s.size();
    stack<char>stk;
    if(n%2 != 0) return 0;
    for(auto c : s)
    {
        if(c == '(' || c == '[')
            stk.push(c);
        else if(c == ']' || c == ')')
        {
            if(stk.empty()) return 0;
            if(c == ')' && stk.top() == '(') stk.pop();
            else if(c == ']' && stk.top() == '[') stk.pop();
            else return 0;
        }
    }
    return stk.empty();
}

int main()
{
    int T;
    cin >> T;
    getchar();
    while(T--)
    {
        string str;
        getline(cin, str);
        if(isValid(str)) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    return 0;
}

