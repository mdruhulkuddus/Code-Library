#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
      int  F, disB, Ta, BoSp;
      cin >> F >> disB>> Ta >> BoSp;

      double totalDis = F*1.0 + disB*1.0;

      double timeBolt = F*1.0 / BoSp*1.0;
      double timeTiger = sqrt(( 2 * totalDis) / Ta*1.0);
      //cout << timeBolt << " " << timeTiger << " " << timeTiger <<endl;
      if(timeBolt < timeTiger) cout << "Bolt" << "\n";
      else cout << "Tiger" << "\n";

    }

    return 0;
}

