// timus/ural oj - 319948GN
#include<bits/stdc++.h>
using namespace std;

double x[100], y[100];

double distanceOfTwoPoints(int i, int j) //D = sqrt(x2-x1)^2 + (y2 - y1)^2)
{
    double xx = x[i] - x[j];
    double yy = y[i] - y[j];
    return sqrt(xx*xx + yy*yy);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double pi = acos(-1.0);
    int nails; double radius;
    cin >> nails >> radius;
    double ans  = 2.0 * pi * radius;

    for(int i = 0; i < nails; i++)
        cin >> x[i] >> y[i];

    for(int i = 1; i < nails; i++)
    {
        ans += distanceOfTwoPoints(i-1, i);
    }
    ans += distanceOfTwoPoints(nails-1, 0);
    cout << setprecision(2) << fixed << ans << endl;
    return 0;
}
