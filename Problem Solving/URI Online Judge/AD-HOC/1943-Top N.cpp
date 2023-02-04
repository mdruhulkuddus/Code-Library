#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int arr[7]= {1,3,5,10,25,50,100};
    cin>>n;
    if(n==1) cout<<"Top 1\n";
    else if(1<n && n<=3) cout<<"Top 3\n";
    else if(3<n && n<=5) cout<<"Top 5\n";
    else if(5<n && n<=10) cout<<"Top 10\n";
    else if(10<n && n<=25) cout<<"Top 25\n";
    else if(25<n && n<=50) cout<<"Top 50\n";
    else if(50<n && n<=100) cout<<"Top 100\n";


    return 0;
}

