#include<bits/stdc++.h>
using namespace std;

int main()
{

    int P, Qn;
    cin >> P >> Qn;
    queue<pair<string,int>>Q;
    while(P--)
    {
        string pName;
        int qTime;
        cin >> pName >> qTime;
        Q.push({pName, qTime});
    }
    int T = 0;
    while(!Q.empty())
    {
        auto process = Q.front();
        Q.pop();
        if(process.second <= Qn)
        {
            T += process.second;
            cout << process.first << " " << T << endl;
        }
        else
        {
            T += Qn;
            process.second -= Qn;
            Q.push(process);
        }
    }

    return 0;
}

