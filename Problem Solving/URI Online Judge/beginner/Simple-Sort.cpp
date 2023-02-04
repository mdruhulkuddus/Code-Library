///ascending order arrange of array (small to big)
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c;
    int arr[3];

    for(int i =0; i<3; i++)
        cin>>arr[i];
    a=arr[0]; b=arr[1]; c=arr[2];

    for(int i=0; i<3;i++ )
    {
        for(int j=i+1; j<3; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
                //code of swap
//                int temp = arr[i];
//                arr[i]=arr[j];
//                arr[j]=temp;
            }
        }
    }
    for(int i =0; i<3; i++)
    {
         cout<<arr[i]<<endl;
    }
    cout<<endl;


    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;

}




