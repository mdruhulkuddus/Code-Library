#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n, arr[10];
    cin>>n;
    for(int i = 0, j=n; i<10; i++,j=j*2)
    {
        arr[i]=j;
    }
    for(int i = 0; i<10; i++)
    {
        cout<<"N["<< i<<"] = "<< arr[i]<<"\n";
    }
    return 0;
}
