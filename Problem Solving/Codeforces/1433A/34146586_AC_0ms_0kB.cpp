#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100000
#define MOD 1000000007

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int number;
        cin >> number;
        int cat = number%10;
        int digit = floor(log10(number))+1;
        if(digit == 1) cout << ((cat * 10) - 10)+1 << endl;
        else if(digit == 2)  cout << ((cat * 10) - 10)+3 << endl;
        else if(digit == 3)  cout << ((cat * 10) - 10)+6 << endl;
        else if(digit == 4)  cout << ((cat * 10) - 10)+10 << endl;
    }
    return 0;
}

