#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s == "1" ) cout << 0 << endl;
        else
        {
            int num = stoi(s);
            if(s.size() == 1)  cout << num - 1 << endl;
            else if(s.size() == 2)  cout << num - 10 << endl;
            else if(s.size() == 3)  cout << num - 100 << endl;
            else if(s.size() == 4)  cout << num - 1000 << endl;
            else if(s.size() == 5)  cout << num - 10000 << endl;
            else if(s.size() == 6)  cout << num - 100000 << endl;
            else if(s.size() == 7)  cout << num - 1000000 << endl;
            else if(s.size() == 8)  cout << num - 10000000 << endl;
            else if(s.size() == 9)  cout << num - 100000000 << endl;
            else if(s.size() == 10)  cout << num - 1000000000 << endl;


        }
    }
    return 0;
}

