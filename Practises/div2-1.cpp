#include<bits/stdc++.h>
using namespace std;
#define MX 100000000
#define ll long long
int main()
{

//    const int N = 1e8;
//    vector<int>a(N);
//    a[0] = 1;
//    for(int i = 2; i < MX; i++ )
//    {
//        int cnt = 0;
//        for(int j = 1; j <= i; j++)
//        {
//            int gcd = __gcd(i, j);
//            int lcm = (i*j)/gcd;
//            int con = lcm / gcd;
//            if(con <= 3) cnt += 2;
//            if(i == j) cnt--;
//        }
//        a[i-1] = a[i - 2] + cnt;
//    }
//    cout << a[1] << " "<< a[2] << " "<<a[3] << " " << a[4] << " "<<a[MX-1];
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        n = n + 2 * (n/2 + n/3);

        cout <<  n << endl;
    }
    return 0;
}

