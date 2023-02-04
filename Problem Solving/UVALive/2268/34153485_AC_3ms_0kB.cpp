#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

stack<double>stk;

void cal(double x, double y, string s)
{
    if(s[0] == '+') stk.push(x+y);
    else if(s[0] == '-') stk.push(x-y);
    else if(s[0] == '*') stk.push(x*y);
    else if(s[0] == '/') stk.push(x/y);
    else stk.push(pow(x,y));
}
int main()
{
    string str;
    while(getline(cin, str))
    {
        string word;
        stringstream ss(str);
        while(ss >> word)
        {
            if(isdigit(word[0]))
            {
                double x = stod(word);
                stk.push(x);
            }
            else
            {
                double y = stk.top();
                stk.pop();
                double x = stk.top();
                stk.pop();
                cal(x, y, word);
            }
        }

        cout <<setprecision(4) << fixed <<  stk.top() << endl;
    }
    return 0;
}

