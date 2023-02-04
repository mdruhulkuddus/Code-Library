#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, TC = 1;
    cin >> T;
    while(T--)
    {
        int N, result;
        cin >> N;
        if(N == 1 || N == 2 || N == 3 || N == 4 || N == 5)
            cout <<"Case #"<<TC++ <<": " << 1 << endl;
        else if(N%5 == 1 || N%5 == 2 || N%5 == 3 || N%5 == 4)
            cout <<"Case #"<<TC++ <<": " << N/5 + 1 << endl;
        else {
            result = N/5;
            cout <<"Case #"<<TC++ <<": " << result << endl;
        }
    }
    return 0;
}

