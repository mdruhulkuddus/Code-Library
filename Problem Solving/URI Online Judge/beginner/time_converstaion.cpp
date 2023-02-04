#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,hours,minutes,seconds;

    cin>>n;

    hours=n/3600;
    minutes=n/60 - hours*60;
    seconds=n%60;

    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    return 0;
}

