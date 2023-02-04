#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, val, position=0;
    cin>> t;
    int arr[t];
    for(int i =0; i<t; i++)
    {
        cin>>arr[i];
    }
    int small = arr[0];

    for(int i = 1; i<t; i++)
    {
        if(arr[i]<small)
        {
            small =arr[i];
            position = i;
        }
    }
    cout<<"Menor valor: "<<small<<"\n"<<"Posicao: "<<position;

}
