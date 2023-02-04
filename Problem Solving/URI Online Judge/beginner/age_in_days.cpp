#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int Total_days,years,months,days ;

    cin>>Total_days;
    years =Total_days/365;
    months =Total_days%365/30; ///Total_days/30-years*12 (wrong)
    days=Total_days%365 - months*30;

    cout<<years<<" ano(s)"<<endl;
    cout<<months<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
    return 0;
}
